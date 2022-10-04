#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	/*int ch = getchar();
	putchar(ch);*/

	int ch = 0;
	//使用 Ctrl + Z 终止循环
	//EOF ---end of file --> -1(本质为-1)
	while ((ch = getchar()) != EOF) {//即使在控制台打印EOF也不会结束。因为getchar（）每次只会判断一个字符，相当于
		//拿E 和 EOF 比一次，再拿 O　和 EOF 比一次， 再拿 F 和 EOF 比一次了。
		putchar(ch);
	}
	return 0;
}

//int main() {
//	int i = 1;
//	while (i <= 10) {
//
//
//		if (i == 5) {
//			continue;//本次循环结束，跳转到while后进行判读，是否能进入下一次循环。
//		}
//		printf("%d  ", i);//结果为 死循环，打印出1 2 3 4后仍一直循环。
//		//将i++放到if语句前，则打印结果为 1 2 3 4 6 7 8 9 10 
//		i++;
//	}   
//		return 0;
//	
//}
//
//int main() {
//    int i = 1;
//    while (i <= 10) {
//    
//        if (5 == i) {
//	break;//永久终止本次循环，直接结束。
//		}
//		printf("%d  ",i);//结果为 1 2 3 4 
//		i++;
//    }
//    return 0;
//}

//int main() {
//
//  利用while循环打印出1-10
//	int i = 1;
//	while (i <= 10) {   
//		printf("%d  ",i);//结果为 1 2 3 4 5 6 7 8 9 10 
//		i++;
//	}
//	return 0;
//}








//小卖部小程序
//int main(){
// 
//	int num = 0;
//	printf("欢迎光临本小卖部\n");
//	printf("本小店有零食：1.火腿肠 2.小熊猫干脆面 3.德芙纵享丝滑巧克力 4.老坛酸菜牛肉面 5.跳跳糖\n");
//	printf("请您输入相应的数字来购买对应的商品，谢谢您的配合！\n");
//	scanf("%d",&num);
//	switch (num) {
//	   case 1:
//		  printf("这是您的火腿肠，五毛钱。\n");
//		  break;
//	   case 2:
//		  printf("这是您的小熊猫干脆面，三块钱。\n");
//		  break;
//	   case 3:
//		  printf("这是您的德芙纵享丝滑巧克力，五块钱。\n");
//		  break;
//	   case 4:
//		  printf("这是您的老坛酸菜牛肉面 ，五块钱。\n");
//		  break;
//	   case 5:
//		  printf("这是您的跳跳糖，一块钱。\n");
//		  break;
//	   default : 
//		   printf("您好，本小店没有这种商品，请确认后再次购买");
//		   break;
//	};
//	return 0;
//}
