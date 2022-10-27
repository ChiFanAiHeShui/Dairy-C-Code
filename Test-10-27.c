#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int* test(){//test函数一调用完的话，a变量就会被释放掉
	int a = 10;
	return &a;
}
int main() {//指针指向的空间释放
	int* p = test();
	 *p = 20;//a释放掉后，再次解引用的话就找不到地址了
	return 0;
}

//int main() {//指针越界访问
//    int i = 0;
//    int arr[10] = { 0 };
//    int* p = &arr;
//    for (int i = 0; i <= 11;i++) {
//        //当指针指向的范围超出了数组arr的范围时，p就是野指针
//        (*p) = 1;
//    }
//    return 0;
//}
//

//int main() {//1.指针未初始化
//	int* p;//局部变量指针未初始化，默认为随机值
//	*p = 20;//这里表示为把随机生成的地址解引用后将其值改为20。
//	return 0;
//}
// 
// 
// 
// 
//int main() {//指针的 +-
//	int n = 10;
//	char* pc = (char*)&n;
//	int* pi = &n;
//
//	printf("%p\n",&n);
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	printf("%p\n", pi);
//	printf("%p\n", pi+1);
//
///*输出结果为
//000000457EF9F864
//000000457EF9F864
//000000457EF9F865
//000000457EF9F864
//000000457EF9F868
//*/
//	return 0;
//
///*结论为：
//  指针类型决定了指针向前或者向后走一步有多大（距离）
//*/
//
//}

//int main() {//指针的解引用操作
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;
//	//将四个字节全都修改为0
//
//	char* pc = &a;
//	*pc = 0;
//	//只修改了一个字节的值为0
//
//	printf("%p\n",pa);
//	printf("%p\n", pc);
//	//虽然输出结果相同，但还是有差异的。
//
//	return 0;
//
//	//结论：指针的类型决定了指针进行解引用的时候，能够访问空间的大小。
//}

//int main() {
//	char a = 0xb6; // b6 --> 10110110   
//	short b = 0xb600;
//	int c = 0xb6000000;
//
//	if (a == 0xb6) {//在进行判断是否相等的时候，会进行整形提升，最高位补符号位。
//		            //11111111111111111111111110110110  和  00000000000000000000000010110110  结果为false
//		printf("a");
//	}
//	if (b == 0xb600) {
//		printf("b");
//	}
//	if (c == 0xb6000000) {
//		printf("c");
//	}
//	//输出结果为： c
//	return 0;
//}

//struct Stu{
//    char name[20];
//    int age;
//    char id[20];
//};
//
//int main() {
//    //使用struct Str这个类型创建了一个学生对象s1，并初始化
//    struct Stu  s1 = {"张三",20,"2019010305"};
//    struct Stu* ps = &s1;
//
//    printf("%s\n",ps -> name);
//    printf("%d\n",ps -> age);
//    //结构体指针 -> 成员名
//    /*
//    printf("%s\n",(*ps).name);
//    printf("%d\n",(*ps).age);
//    */
//   
//    /*
//    printf("%d\n", s1.age);
//    printf("%s\n",s1.name);
//    printf("%s\n",id);*/
//    //结构体变量 .指针名
//    return 0;
//}