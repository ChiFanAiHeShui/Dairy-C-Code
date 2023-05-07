#define _CRT_SECURE_NO_WARNINGS

/*
描述
输入一个整数，求其十位数


输入描述：
输入一个整数，在int范围内
输出描述：
输出一个整数
示例1
输入：
123
输出：
2
*/
//
//#include <stdio.h>
//
//int main() {
//
//    int a = 0;
//    scanf("%d", &a);
//    a /= 10;
//    a %= 10;
//    printf("%d", a);
//    return 0;
//}


/*
描述
小S：终于可以开学啦！好开心啊！
小Y：你没看新闻吗，开学日期又延后了。
小S：NOOOOOOOOOOOOOOOO！
小S知道原计划星期X开学，通知开学时间延期N天，请问开学日期是星期几（星期日用7表示）？
输入描述：
输入包含两个数字X，N（1≤X≤7, 1≤N≤1000）。
输出描述：
输出一个数字，表示开学日期是星期几。
示例1
输入：
1 2
复制
输出：
3
复制
示例2
输入：
5 9
复制
输出：
7
*/


/*
#include <stdio.h>

int main() {

    int X, N;
    scanf("%d %d", &X, &N);

    if(N > 7){
      N %= 7;
    }

    int tmp = X + N;

    if(tmp>7){

     printf("%d",tmp%7);

    }else{
      printf("%d\n",tmp);
    }


    return 0;
}
*/


/*
给定秒数 seconds ，把秒转化成小时、分钟和秒。

数据范围：

0<seconds<100000000

输入描述：

一行，包括一个整数，即给定的秒数。
输出描述：
一行，包含三个整数，依次为输入整数对应的小时数、分钟数和秒数（可能为零），中间用一个空格隔开。
示例1
输入：
3661
复制
输出：
1 1 1
*/

/*

#include <stdio.h>

int main() {

    int seconds = 0;
    scanf("%d",&seconds);
    int hour = seconds / 3600;
    int minute = (seconds - (3600 * hour)) /60 ;
    int second = (seconds - (3600 * hour) - (60 * minute));

    printf("%d %d %d",hour,minute,second);
    return 0;
}

*/