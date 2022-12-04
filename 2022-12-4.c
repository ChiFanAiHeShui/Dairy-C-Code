#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct Stu {
    int age;
    char name[20];
};

int cmp_int(const void* e1, const void* e2) {

    return *(int*)e1 - *(int*)e2;
}
int cmp_Stu(const void* e1, const void* e2) {
    return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

void Swap(char* e1, char* e2, int widht) {
    int i = 0;
    for (i = 0; i < widht; i++) {
        char tmp = *e1;
        *e1 = *e2;
        *e2 = tmp;
        e1++;
        e2++;
    }
}

void bubble_sort(void* base, int sz, int width, int (*cmp)(const  void* e1, const void* e2)) {
    int i;
    for (i = 0; i < sz; i++) {
        int j = 0;
        for (j = 0; j < sz - 1 - i; j++) {
            if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0) {//交换条件

                Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);//实现交换的函数

            }
        }
    }
}


int main() {
    /*

    int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
    int width = sizeof(arr[2]);
    int sz = sizeof(arr) / sizeof(arr[3]);
    bubble_sort(arr,sz,width,cmp_int);//第一个参数是数组名，第二个参数是数组长度，第三个参数是每个元素的长度，第四个是自定义函数求大小。
        int i = 0;
    for (i = 0; i < sz; i++) {
    printf("%d  ", arr[i]);
    }
    */

    struct Stu s[3] = { {20,"zhangsan"},{23,"lisi"},{13,"wangwu"} };
    int sz_Stu = sizeof(s) / sizeof(s[2]);
    int width_Stu = sizeof(s[2]);
    bubble_sort(s, sz_Stu, width_Stu, cmp_Stu);



    return 0;
}