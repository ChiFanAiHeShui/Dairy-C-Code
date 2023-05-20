﻿#define _CRT_SECURE_NO_WARNINGS

/*
描述
根据给出的三角形3条边a, b, c，计算三角形的周长和面积。

数据范围：
0
<
�
,
�
,
�
≤
100000

0<a,b,c≤100000
输入描述：
一行，三角形3条边（能构成三角形），中间用一个空格隔开。
输出描述：
一行，三角形周长和面积（保留两位小数），中间用一个空格隔开，输出具体格式详见输出样例。
示例1
输入：
3 3 3
复制
输出：
circumference=9.00 area=3.90

*/

/*解题思路

主要是需要了解海伦公式：
知道三角形的三条边求面积的公式是：a,b,c三条边相加后除以2后为p，然后将p*（p-a）*(p-b)*(p-c)得出面积

C语言库中的开根号方法为：sqrt();方法。

*/

//#include <stdio.h>
//#include <math.h>
//int main() {
//    double a, b, c;
//    scanf("%lf%lf%lf", &a, &b, &c);
//
//    double length = a + b + c;
//    double p = length / 2;
//    double area = sqrt(p * (p - a) * (p - b) * (p - c));
//    printf("circumference=%0.2f area=%0.2f", length, area);
//
//
//}


/*
描述
BoBo买了一箱酸奶，里面有n盒未打开的酸奶，KiKi喜欢喝酸奶，第一时间发现了酸奶。KiKi每h分钟能喝光一盒酸奶，并且KiKi在喝光一盒酸奶之前不会喝另一个，那么经过m分钟后还有多少盒未打开的酸奶？

输入描述：
多组输入，每组输入仅一行，包括n，h和m（均为整数）。输入数据保证m <= n * h。
输出描述：
针对每组输入，输出也仅一行，剩下的未打开的酸奶盒数。
示例1
输入：
8 5 16
复制
输出：
4
*/

/*解题思路：
 
本题中主要难点在于如何计算打开的总酸奶数量

首先，因为在喝完一瓶之前不会拿下一瓶。然后，也有刚开或者和一半之类的情况
这时只需要考虑到利用取余操作来进行判断

总之，就是如果取余为0，那就相除就行。不为0时，只要多减一就行
*/

//#include <stdio.h>
//
//int main() {
//
//    int n, h, m;
//    scanf("%d %d %d", &n, &h, &m);
//    int tmp = 0;
//    if (m % h == 0) {
//        printf("%d", n - (m / h));
//    }
//    else {
//        printf("%d", n - (m / h) - 1);
//    }
//}



