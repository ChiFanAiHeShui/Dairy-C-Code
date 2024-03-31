#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main() {
//
//	printf("15减去37的结果是%d\n", 15 - 37);
//
//	return (0);
//}

//int main() {
//
//
//	printf("风\n林\n火\n山\n");
//	return (0);
//}

//int main() {
//
//
//	printf("喂！\n您好！\n\n再见。");
//	return (0);
//}

//int main() {
//
//	int no;
//	printf("请输入一个整数：");
//	scanf("%d", &no);
//	printf("该整数加上10的结果是%d\n", no + 10);
//
//	return 0;
//}


//int main() {
//
//	int no;
//	printf("请输入一个整数：");
//	scanf("%d", &no);
//
//	printf("该整数减去10的结果是：%d\n", no - 10);
//
//	return (0);
//}

//int main() {
//
//
//	puts("风\n林\n火\n山");
//	return (0);
//}

//int main() {
//
//	int m, n;
//
//	puts("请输入两个整数。");
//	printf("整数1：");  scanf("%d", &m);
//	printf("整数2：");  scanf("%d", &n);
//
//	printf("它们的乘积是 %d",m*n);
//
//	return (0);
//}



//int main() {
//
//	int m, n, x;
//
//	puts("请输入三个整数。");
//	printf("整数1:"); scanf("%d", &m);
//	printf("整数2:"); scanf("%d", &n);
//	printf("整数3:"); scanf("%d", &x);
//
//	printf("它们的和是 %d", m + n + x);
//
//	return (0);
//}



//int main() {
//
//	int m, n;
//	
//	puts("请输入两个整数。");
//	printf("整数A："); scanf("%d", &m);
//	printf("整数B："); scanf("%d", &n);
//
//	int result = ((float)m / n) * 100;//算出m的值是n的百分值的多少
//
//	printf("A的值是B的%d%%", result);
//
//
//	return (0);
//}


//int main() {
//
//	int m, n;
//
//	puts("请输入两个整数。");
//	printf("整数A:"); scanf("%d", &m);
//	printf("整数B:"); scanf("%d", &n);
//
//	printf("它们的和是 %d,积是 %d", m + n, m * n);
//	
//	return (0);
//}

//int main(){
//
//	double f;
//
//	printf("请输入一个实数："); scanf("%lf", &f);
//	printf("你输入的是：%f", f);
//
//	return (0);
//}


//int main() {
//
//	int m, n;
//
//	puts("请输入两个整数。");
//	printf("整数A："); scanf("%d", &m);
//	printf("整数B："); scanf("%d", &n);
//
//	这里注意需要先把m转换成浮点数才行，否则整数除一个整数必定为整数
//	printf("A是B的%f%%。", ((double)m / n )* 100 );
//	return (0);
//}


//int main() {
//
//	int high;
//
//	printf("请输入您的身高："); scanf("%d", &high);//取得身高的整数位，用int来接收
//	printf("您的标准体重是%.1f公斤。", (high - 100) * 0.9);
//
//	return (0);
//}

//int main() {
//
//	int m, n;
//
//	puts("请输入两个整数。");
//	printf("整数A："); scanf("%d", &m);
//	printf("整数B："); scanf("%d", &n);
//
//	if (m % n ) 
//       puts("B不是A的约数。");
//	else 
//	   puts("B是A的约数。");
//
//	return 0;
//}


//int main() {
//
//	double m, n;
//
//	puts("请输入两个数。");
//	printf("第一个数："); scanf("%lf", &m);
//	printf("第二个数："); scanf("%lf", &n);
//
//	printf("第一个数与第二个数的相等关系运算符运算结果为：%d\n", m == n);
//	printf("第一个数与第二个数的大于等于关系运算符运算结果为：%d\n", m >= n);
//	printf("第一个数与第二个数的小于等于关系运算符运算结果为：%d\n", m <= n);
//
//
//
//	return (0);
//}


//int main() {
//
//	int m;
//
//	printf("请输入一个整数：");  scanf("%d",&m);
//
//	if (m > 0)
//		printf("绝对值是%d", m);
//	else
//		printf("绝对值是%d", -m);
//	
//	return (0);
//}


//int main() {
//
//	int m, n;
//
//	puts("请输入两个整数。");
//	printf("整数A："); scanf("%d", &m);
//	printf("整数B："); scanf("%d", &n);
//
//	if (m > n)
//		puts("A大于B");
//	else if (m < n)
//		puts("A小于B");
//	else
//		puts("A和B相等");
//
//
//	return 0;
//}


//int main() {
//
//	int x,y,z, min;
//
//	puts("请输入三个整数。");
//	printf("第一个整数："); scanf("%d", &x);
//	printf("第二个整数："); scanf("%d", &y);
//	printf("第三个整数："); scanf("%d", &z);
//
//	min = x;
//    if (y < min)
//		min = y;
//    if (z < min)
//		min = z;
//
//	printf("这三个整数中最小的那个数是：%d\n", min);
//
//
//
//
//	return (0);
//}


//int main() {
//
//	int n1, n2, n3, n4, max;
//    
//	puts("请输入四个整数。");
//	printf("第一个整数："); scanf("%d", &n1);
//	printf("第二个整数："); scanf("%d", &n2);
//	printf("第三个整数："); scanf("%d", &n3);
//	printf("第四个整数："); scanf("%d", &n4);
//
//	max = n1;
//
//	if (n2 > max)
//		max = n2;
//	if (n3 > max)
//		max = n3;
//	if (n4 > max)
//		max = n4;
//
//	printf("这四个数中最大值为：%d", max);
//
//	return (0);
//}


//int main() {
//
//	int n1, n2,result;
//
//	puts("请输入两个整数。");
//	printf("整数1：");  scanf("%d", &n1);
//	printf("整数2：");  scanf("%d", &n2);
//
//         
//	if (n1 > n2)
//		result = n1 - n2;
//	else if (n1 < n2)
//		result = n2 - n1;
//	else
//		result = 0;
//	
//	printf("它们的差是：%d\n",result);
//
//	return(0);
//}


//int main() {
//
//
//	int num;
//
//	puts("请输入一个整数。"); scanf("%d", &num);
//
//	num == 0 ? (printf("该整数是0\n")) : (printf("该整数不是0\n"));
//
//	return (0);
//}

//int main() {
//
//	int n1, n2, n3;
//
//	puts("请输入三个整数。");
//	printf("整数A："); scanf("%d", &n1);
//	printf("整数B："); scanf("%d", &n2);
//	printf("整数C："); scanf("%d", &n3);
//
//	if ((n1 == n2) && (n2 == n3))
//		puts("三个值都相等\n");
//    else if ((n1 == n2) || (n2 == n3))
//		puts("有两个值相等\n");
//	else
//		puts("三个值各不相等\n");
//
//	return (0);
//}

//int main() {
//
//	int n1, n2, result;
//
//	puts("请输入两个整数。");
//	printf("整数A："); scanf("%d", &n1);
//	printf("整数B："); scanf("%d", &n2);
//
//	result = n1 - n2;
//
//	if (result < 10 || result == 10)
//		puts("它们的差小于等于10");
//	else
//		puts("它们的差大于等于11");
//
//	return (0);
//}


int main() {



	return (0);
}