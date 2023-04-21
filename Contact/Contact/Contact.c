#define _CRT_SECURE_NO_WARNINGS

#include "Contact.h"



static int FindByName(Contact* pc, char* name) {
    assert(pc);
    int i = 0;
    for (i = 0; i < pc->num; i++) {
        if (0 == strcmp(pc->data[i].name,name)){
            return i;
        }
    }
    return -1;
}

void InitContact(Contact* pc) {
      
    pc->num = 0;
    memset(pc->data, 0, sizeof(pc->data));//将通讯录中的所有通信人的数据都初始化为0

}

void AddContact(Contact* pc) {
    
    assert(pc);

    if (pc->num == contact_MAX) {
        printf("通讯录已满，无法再添加\n");
        return;
    }

    printf("请输入姓名>:\n");
    scanf("%s", pc->data[pc->num].name);
    printf("请输入年龄>:\n");
    scanf("%d", &(pc->data[pc->num].age));
    printf("请输入性别>:\n");
    scanf("%s", pc->data[pc->num].sex);
    printf("请输入住址>:\n");
    scanf("%s", pc->data[pc->num].add);
    printf("请输入联系电话>:\n");
    scanf("%s", pc->data[pc->num].tel);

    (pc->num)++;
    
    printf("添加成功\n");
}

void PrintContact(Contact* pc) {

    assert(pc);

    if (pc->num == 0) {
        printf("通讯录没有联系人，无法打印\n");
        return;
    }

    int i = 0;
    printf("%-15s %-5s %-5s %-20s %-12s\n","姓名","年龄", "性别","住址","通信电话");

    for (i = 0; i < pc->num; i++) {
        printf("%-15s %-5d %-5s %-20s %-12s\n", pc->data[i].name, pc->data[i].age,
            pc->data[i].sex, pc->data[i].add, pc->data[i].tel);
    }

    printf("打印成功\n");
}


void DelContact(Contact* pc) {

    if (pc->num == 0) {
        printf("通讯录为空，无法删除\n");
        return;
    }

    char name[name_MAX];
    printf("请输入你想删除人的姓名>:\n");
    scanf("%s", &name);
    
   int ret =  FindByName(pc,name);

   if (ret == -1) {
       printf("没找到这个人\n");
       return;
   }
   
   int j = 0;
   for (j = ret; j < pc->num-1; j++) {
       pc->data[j] = pc->data[j + 1];
   }

   pc->num--;
   printf("删除成功\n");
}

void SearchContact(Contact* pc) {
    if (pc->num == 0) {
        printf("通讯录为空,无法查询\n");
        return;
    }

    char name[name_MAX];
    printf("请输入你想查找的人名>:\n");
    scanf("%s", &name);
    
    int ret = FindByName(pc, name);


    if (ret == -1) {
        printf("没找到这个人\n");
    }
    else {
        printf("找到了!\n");
        printf("%-15s %-5s %-5s %-20s %-12s\n", "姓名", "年龄", "性别", "住址", "通信电话");
        printf("%-15s %-5d %-5s %-20s %-12s\n", pc->data[ret].name, pc->data[ret].age,
            pc->data[ret].sex, pc->data[ret].add, pc->data[ret].tel);
    }
}
