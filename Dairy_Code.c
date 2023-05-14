/*
输入n科成绩（浮点数表示），统计其中的最高分，最低分以及平均分。

数据范围：
1
≤
�
≤
100
 
1≤n≤100  ， 成绩使用百分制且不可能出现负数
输入描述：
两行，

第1行，正整数n（1≤n≤100）

第2行，n科成绩（范围0.0~100.0），用空格分隔。
输出描述：
输出一行，三个浮点数，分别表示，最高分，最低分以及平均分（小数点后保留2位），用空格分隔。
示例1
输入：
5
99.5 100.0 22.0 60.0 88.5
复制
输出：
100.00 22.00 74.00

*/


#include <stdio.h>

int main() {
    int n ;
    double score, max = 0, min = 100, sum = 0,average;
    scanf("%d",&n);
    
    for(int i = 0; i < n;i++){
        scanf("%lf",&score);
        if(score > max){
            max = score;
        }
        if(score < min){
            min = score;
        }
        sum += score;
    }
    average = sum / 5;

    printf("%0.2lf %0.2lf %0.2lf",max,min,average);

}