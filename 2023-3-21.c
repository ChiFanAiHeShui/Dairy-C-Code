#define _CRT_SECURE_NO_WARNINGS

/*
写一个函数打印arr数组的内容，不使用数组下标，使用指针。

arr是一个整形一维数组。

*/
//int main() {
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//
//	int* p = arr;
//
//	int i = 0;
//	int length = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < length; i++) {
//		printf("%d ", *(p + i));
//	}
//
//
//	return 0;
//}



//将获取到的字符串内容颠倒过来，并输出
// 
// 
//#include<stdio.h>
//#include<string.h>
//int main() {
//    char str[10001] = { '\0' };
//    while (gets(str)) {  //注：这里不能使用scanf("%d",str)函数，含空格字符串会被视为多组输入。
//        int len = strlen(str);
//        for (int i = len - 1; i >= 0; i--) {
//            printf("%c", str[i]);
//        }
//        printf("\n");
//    }
//}




/*求出0～100000之间的所有“水仙花数”并输出。

“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1^3＋5^3＋3^3，则153是一个“水仙花数”。



1523

1523 % 10 = 3
1523 /10 = 152

152%10 = 2
152 /10 = 15

15 %10 = 5
15/10 = 5

1% 10 = 1
1/10 = 0

*/

//#include <stdio.h>
//#include <math.h>
//
//int place(int num) {//求一个数的位数
//	int count = 0;
//	while (num) {
//		num = num / 10;
//		count++;
//	}
//	return count;
//}
//
//
//int is_shuixianhua(int num) {//判断一个数是否为水仙花数，是的话返回它的值，不是则返回-1.
//	int num1 = num;
//
//	int cifang = 0;
//
//	cifang = place(num);
//
//
//
//	int sum = 0;
//
//	while (num) {
//
//		sum += pow((num % 10), cifang);
//		num = num / 10;
//
//	}
//
//	if (num1 == sum) {
//		return sum;
//	}
//	else {
//		return -1;
//	}
//
//}
//
//
//
//int main() {
//
//	int i = 0;
//	int ret = 0;
//
//	for (i = 100; i < 100000; i++) {//从100开始才算是真正的水仙花数。
//		ret = is_shuixianhua(i);
//		if (-1 != ret) {
//			printf("%d ", ret);
//		}
//	}
//	
//	
//	return 0;
//}



//#include <stdio.h>
//#include <string.h>
//
//void xiabanbufen() {//打印菱形下半部分图形的函数
//
//	char arr1[] = "             ";
//	char arr2[] = "*************";
//
//	int right = strlen(arr1) - 1;
//	int left = 0;
//
//
//	int i = 0;
//	for (i = 0; i < 6; i++) {
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//
//}
//
//
//int main() {
//
//	char arr1[] = "      *      ";
//	char arr2[] = "*************";
//
//	int mid = (strlen(arr1) - 1) / 2;
//	
//	int right = mid + 1;
//	int left = mid - 1;
//	
//	printf("%s\n", arr1);
//	while (left >= 0 && right <= strlen(arr1) - 1) {//打印菱形上半部分的函数
//
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		right++;
//		left--;
//
//		printf("%s\n", arr1);
//	}
//		
//	xiabanbufen();
//	
//
//	return 0;
//}
                


/*
求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，

例如：2+22+222+2222+22222
*/

//#include <stdio.h>
//#include <string.h>
//
//
//int main() {
//
//    int tmp = 0;
//    int  a = 0;
//    int n = 0;
//    int sum = 0;
//    int i = 0;
//
//    scanf("%d%d", &a, &n);//输入 2 5 表示求Sn的前五项项和，前一个是数字a，后一个是表示前几项之和。
//
//    for (i = 0; i < n; i++) {
//        tmp = tmp * 10 + a;
//        sum = sum + tmp;
//     }
//
//    printf("%d", sum);
//
//    return 0;
//}
