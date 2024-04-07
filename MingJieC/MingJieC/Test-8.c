//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//
//
//返回无符号整数x的第pos位设为1后的值
//这里主要是依靠1先向左pos-1位后的值，然后与x进行或运算就可以得出结果了。
//unsigned set(unsigned x, int pos) {	
//		
//	unsigned int tmp = 1;
//	tmp = tmp << pos - 1;
//		
//	x = x | tmp;
//			
//	return x;
//}
//		
//返回无符号整数x的第pos位设为0后的值
//unsigned reset(unsigned x, int pos) {
//			      
//	unsigned int tmp = 1;
//	tmp = tmp << pos - 1;//先把1的位置移动到对应的需要修改的位置上去
//		
//		
//		
//	if (((x >> pos - 1) & 1) == 1) {//判断x上对应pos位置处的二进制的值
//		x = x ^ tmp;
//	}
//	else {
//		x = x & tmp;
//	}
//			
//	return x;
//		
//		      
//}
//		
//unsigned inverse(unsigned x, int pos) {
//			
//	unsigned int tmp = 1;
//	tmp = tmp << pos - 1;//先把1的位置移动到对应的需要修改的位置上去
//		
//		
//		
//	if (((x >> pos - 1) & 1) == 1) {//判断x上对应pos位置处的二进制的值
//		x = x ^ tmp;
//	}
//	else {
//		x = x | tmp;
//	}
//		
//	return x;
//			
//}
//		
//int main() {
//		
//	unsigned int  x = 128;
//		
//	for (int i = 31; i >= 0; i--) {//打印数值对应的二进制位
//			putchar((x >> i) & 1 ? '1' : '0');
//	}
//		
//	putchar('\n');
//	unsigned int tmp;
//	tmp = inverse(x, 3);
//		
//	for (int i = 31; i >= 0; i--) {//打印数值对应的二进制位
//		putchar((tmp >> i) & 1 ? '1' : '0');
//	}
//		
//	return 0;
//}



////将无符号整数x的第pos位开始的n位设为1后的值
//unsigned set_n(unsigned x,int pos ,int n) {
//
//	unsigned int tmp = 1;
//	tmp = tmp << pos - 1;//先把1移动到pos位置处
//
//	for (int i = 0; i < n; i++) {//(循环实现)从pos位置处开始与x进行或运算
//		                         //或运算完一次后，再将tmp的值向左移动一位
//		x = x | tmp;
//		tmp <<= 1;
//
//	}
//
//	return x;
//}




////返回将无符号整数x的第pos位开始的n位设为0后的值
//unsigned reset_n(unsigned x, int pos, int n) {
//
//	unsigned int tmp = 1;
//	tmp = tmp << pos - 1;//先把1移动到pos位置处
//
//	if ((x >> pos - 1) & 1 == 1) {//先判断x的pos处位置的值。如果为1，就修改。不是说明为0，就不用改了
//		x = x ^ tmp;
//	}
//
//	for (int i = 0; i < n; i++) {//此时，x的值为pos位置处已经过修改的值
//		                         //如果此时，x再依次分别向右移动1和n-1次
//		                   //并且此时tmp指向的位置也就是x的对应的位置处，最后进行异或就可以实现了。
//		tmp = tmp << 1;
//		if ((x >> i) & 1 == 1) {
//			x = x ^ tmp;
//		}
//
//	}
//
//	return x;
//}


//unsigned inverse_n(unsigned x,int pos,int n) {
//	  
//	unsigned int tmp = 1;
//	tmp = tmp << pos -1 ;//先把1移动到pos位置处
//
//	if ((x >> pos - 1) & 1 == 1) {
//		x = x ^ tmp;
//	}
//
//	00000000000000000000000011111011
//
//
//	for (int i = 0; i < n; i++) {
//	
//		tmp = tmp << 1;
//
//		if ((x >> i) & 1 == 1) {
//		    x = x ^ tmp;
//		}
//		else {
//			x = x | tmp;
//		}
//		 
//	}
//
//	return x;
//}
//
//
//int main() {
//
//	unsigned int  x = 255;
//
//	for (int i = 31; i >= 0; i--) {//打印数值对应的二进制位
//		putchar((x >> i) & 1 ? '1' : '0');
//	}
//
//	putchar('\n');
//
//	unsigned int tmp;
//	tmp = inverse_n(x, 3,3);
//
//	for (int i = 31; i >= 0; i--) {//打印数值对应的二进制位
//
//		putchar((tmp >> i) & 1 ? '1' : '0');
//
//	}
//
//	return (0);
//}