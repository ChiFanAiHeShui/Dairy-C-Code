#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>




int main() {

	int i = 0;
	char password[30] = {0};
	for (int i = 1; i < 4;i++) {
		printf("请输入您的密码\n");
		scanf("%s",password);
		if (strcmp(password,"123456" ) ==0 ) {
			printf("恭喜您，密码正确！\n");
			break;
		}
	}
	if (i == 3) {
		printf("您输入密码错误次数已经达到上限，账户已被冻结！\n");
	}
	return 0;
}
//#include <string.h>
//#include <windows.h>
//
//
//int main() {
//    char arr1[30] = "Welcome to the World!";
//    char arr2[30] = "###################";
//
//    int left = 0;
//      //int right = (sizeof(arr1)/sizeof(arr[0])-2); 其中，
//     //最后减2的原因是因为字符串结尾需要有'\0'这个字符.而求全是整形数的数组则只减一。
//    int right = strlen(arr1)-1;//strlen是用来求字符串的长度的函数，需要导string包。
//
//    while (left < right) {//让arr1数组覆盖arr2数组
//
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        printf("%s\n", arr2);
//        Sleep(1000);//让程序在这里停留一秒，括号里面的单位是毫秒。且需要导入window包。
//        left++;
//        right--;
//    }
//    return 0;
//}

//int main() {//利用二分法来找出一个数组中的某一个想找的数的下标
//	int arr1[20] = {0,1,2,3,4,5,6,7,8,9,10};
//	int j = 7;
//
//	int left = 0;
//	int right = (sizeof(arr1) / sizeof(arr1[0]) -1);
//
//	while (left <= right) {//循环条件，当left<=right时，说明查找下标没有溢出。
//		int mid = (left + right) / 2 ;//二分法主要利用条件，利用mid中间值来查找，且值随着循环不断更新。
//		                             //优点：可以简便查找过程
//		
//		if (mid > j) {
//			right = mid - 1;
//		}
//		else if (mid < j) {
//			left = mid + 1;
//		}
//		else {
//			printf("找到了，这个数的下标为： ---> %d\n", mid);//最后打印下标结果为7.
//			break;
//		}
//	}
//	if (left > right) {//说明查找下标溢出了，即遍历整个数组没有找到想找的数
//		printf("没有在该数组中找到您要找的数，请确认后再次查找！\n");
//	}
//	return 0;
//}


//int main() {
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	int ret = 1;
//	for ( j = 1; j <= 3; j++) {//j<= 3 的意思为求：1的阶乘加上2的阶乘加上3的阶乘
//		 ret = 1;//每次内循环结束后，将ret的值重新赋值。
//		 for (int i = 1; i <= j; i++) {
//				ret =(ret * i);
//		 } 
//		 sum = sum + ret;
//	}
//	printf("%d",sum);//最后输出结果为：9，为1的阶乘加上2的阶乘加上3的阶乘。
//	return 0;
//}
//
//
//int main() {
//	int i = 0;
//	do {
//		printf("%d ",i);//输出结果为0 1 2 3 4 5 6 7 8 9
//		i++;
//	} while (i < 10);
//	return 0;
//}
// 

//int main() {
//	 //请问循环要循环多少次？
//	int i = 0;
//	int j = 0;
//	                                    //因为循环条件中使用是赋值，而不是
//                                        //判断，从而导致k的值为0。为假，从而条件判断通过不了，无法循环。
//	for (int i = 0, k = 0; k = 0; i++,k++)//答案：循环0次
//		k++;
//	    return 0;
//}
//int main() {
//	int num1 = 0;
//	int num2 = 0;
//	for ( num1 = 0; num1 < 10; num1++) {
//		for (; num2 < 10; num2++ ) {//少写了个初始化num2，会出bug
//			printf("Hello World!");//最后只会输出十次，而不是一百次。因为当内循环循环了一次后，
//			                       //num2的值为10，导致内循环条件不匹配。
//		}
//	}
//	return 0;
//}
//
//
//int main() {
//	for (int i = 1; i < 10; i++){// for循环括号中的三个条件： 初始化  判断  调整 
//		if (i = 5) {//注意：这里的i并不是判断，而是赋值。所以会导致死循环。
//			continue;
//		}
//		printf("%d  ", i);//这里执行不到的，会死循环。
//	}
//	return 0;
//}
//
//int main() 
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF) {
//		if (ch < '0' || ch > '9') {
//			continue;
//			putchar(ch);//用来输出getchar接收到的字符
//		}
//	}
//	return 0;
//}

//int main() {//getchar函数的简单应用
//	printf("请输入你的密码>:\n");
//	int ret = 0;
//	int num1 = 0;
//	int password[20] = {0};
//	scanf("%d",&password);
//	while ((num1 = getchar()) != '\n') {//getchar函数是用来接收一个字符的。
//		;
//	}//作用：用来清除scanf输入函数最后需要敲的回车键的符号'\n'，不然下面的ret变量会接收到'\n'
//	   //导致会直接跳过，不执行判断。
//	printf("请确认您的密码：(Y/N)>:");
//	ret = getchar();
//	if (ret == 'Y') {
//		printf("恭喜您，确认成功！");
//	}
//	else if (ret == 'N') {
//	 printf("不好意思，确认失败！");
//    }
//	return 0;
//}

//int main() {
//	int arr1[] = {1,2,3,4,5,6,7,8,9,10};
//	int j = 7;
//	
//	int left = 0;
//	int right = (sizeof(arr1) / sizeof(arr1[0])) - 1;
//	
//	
//	while (left <= right) {
//		
//		int mid = (left + right) / 2;
//		
//		if (arr1[mid] > j) {
//			right = mid - 1;
//		}
//		else if (arr1[mid] < j) {
//			left = mid + 1;
//		}
//		else {
//			printf("找到了，j的下标为 ---> %d\n ", mid);
//			break;
//		}
//	}
//
//	if (left > right ) {
//		printf("没有找到这个数，请检查这个数组\n");
//	}
//
//	return 0;
//}
//int main() {//求输入的数的阶乘并且输出的程序
//    int i = 0;
//    int num1 = 0;
//    int sum = 1;
//    printf("请输入你想求阶乘的数\n");
//    scanf("%d",&num1);
//    for (int i = 1; i <= num1; i++) {
//        sum = (sum * i);
//    }
//    printf("运算的结果为：%d", sum);
//    return 0;
//}



//int main() {//利用for函数打印出来1-10
//	int i = 0;
//	for (i = 1; i <= 10; i++) {
//
//
//		if (5 == i) {
//		
//			continue;//表示当i为5时，跳过后面的循环，然后回到for循环的变量调整，看能否继续循环。
//			         //其打印结果为：1 2 3 4 6 7 8 9 10
//		}
//
//		//if (5 == i) {
//		//	break;//表示当i为5时，循环直接结束。并且打印结果为1 2 3 4.
//		//}
//		printf("%d ", i);
//
//	}
//	return 0;
//}