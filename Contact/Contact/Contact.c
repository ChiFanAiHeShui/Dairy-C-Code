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
    memset(pc->data, 0, sizeof(pc->data));//��ͨѶ¼�е�����ͨ���˵����ݶ���ʼ��Ϊ0

}

void AddContact(Contact* pc) {
    
    assert(pc);

    if (pc->num == contact_MAX) {
        printf("ͨѶ¼�������޷������\n");
        return;
    }

    printf("����������>:\n");
    scanf("%s", pc->data[pc->num].name);
    printf("����������>:\n");
    scanf("%d", &(pc->data[pc->num].age));
    printf("�������Ա�>:\n");
    scanf("%s", pc->data[pc->num].sex);
    printf("������סַ>:\n");
    scanf("%s", pc->data[pc->num].add);
    printf("��������ϵ�绰>:\n");
    scanf("%s", pc->data[pc->num].tel);

    (pc->num)++;
    
    printf("��ӳɹ�\n");
}

void PrintContact(Contact* pc) {

    assert(pc);

    if (pc->num == 0) {
        printf("ͨѶ¼û����ϵ�ˣ��޷���ӡ\n");
        return;
    }

    int i = 0;
    printf("%-15s %-5s %-5s %-20s %-12s\n","����","����", "�Ա�","סַ","ͨ�ŵ绰");

    for (i = 0; i < pc->num; i++) {
        printf("%-15s %-5d %-5s %-20s %-12s\n", pc->data[i].name, pc->data[i].age,
            pc->data[i].sex, pc->data[i].add, pc->data[i].tel);
    }

    printf("��ӡ�ɹ�\n");
}


void DelContact(Contact* pc) {

    if (pc->num == 0) {
        printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
        return;
    }

    char name[name_MAX];
    printf("����������ɾ���˵�����>:\n");
    scanf("%s", &name);
    
   int ret =  FindByName(pc,name);

   if (ret == -1) {
       printf("û�ҵ������\n");
       return;
   }
   
   int j = 0;
   for (j = ret; j < pc->num-1; j++) {
       pc->data[j] = pc->data[j + 1];
   }

   pc->num--;
   printf("ɾ���ɹ�\n");
}

void SearchContact(Contact* pc) {
    if (pc->num == 0) {
        printf("ͨѶ¼Ϊ��,�޷���ѯ\n");
        return;
    }

    char name[name_MAX];
    printf("������������ҵ�����>:\n");
    scanf("%s", &name);
    
    int ret = FindByName(pc, name);


    if (ret == -1) {
        printf("û�ҵ������\n");
    }
    else {
        printf("�ҵ���!\n");
        printf("%-15s %-5s %-5s %-20s %-12s\n", "����", "����", "�Ա�", "סַ", "ͨ�ŵ绰");
        printf("%-15s %-5d %-5s %-20s %-12s\n", pc->data[ret].name, pc->data[ret].age,
            pc->data[ret].sex, pc->data[ret].add, pc->data[ret].tel);
    }
}
