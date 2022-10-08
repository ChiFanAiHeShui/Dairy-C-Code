//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//关机小程序
//#include<string.h>
//int main() {
//
//	char input[] = { 0 };
//	system("shutdown -s -t 60");//system函数用来输入系统指令的
//again:
//	printf("您的电脑即将在一分钟内关机。请输入：我是猪 来关闭程序！\n");
//	scanf("%s", &input);
//	if (strcpy(input, "我是猪")) {//strcpy函数是用来比较两个字符串是否相等的，需要导入#include<string.h>
//		system("shutdown -a");
//	}
//	else {
//		goto again;
//	}
//	return 0;
//}