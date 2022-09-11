#include <stdio.h>

int main()
{
  //这个程序主要作用是计算两个数的和
  
  int a = 10;
  int b = 20;
  int sum = 0;
  scanf("%d%d",&a&b);//scanf函数是一个输入函数
  
  //sum = 0;C语言规定，变量必须提前定好，不然语法会出错，放到最开始的地方去
  
  sum =  a + b;

  printf("sum =  %d\n",sum);
  
  return 0;
  

}