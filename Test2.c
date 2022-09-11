#include <stdio.h>

int a =100;//全局变量a
int main()
{
   int b = 20;//局部变量b
   int a = 12;//局部变量a
   printf("%d\n",a);//会优先输出局部变量，输出a=12.
   return 0;
}