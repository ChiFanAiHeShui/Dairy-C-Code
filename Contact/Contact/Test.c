#define _CRT_SECURE_NO_WARNINGS
#include "Contact.h"


static void menu() {
	
	printf("******************************\n");
	printf("********1.add      2.del*******\n");
	printf("********3.mod      4.search*****\n");
	printf("********5.sort     6.print****\n");
	printf("********      0.exit      *****\n");
	printf("******************************\n");

}


int main() {

	int input = 0;
	Contact contact;
	InitContact(&contact);

	do {
          menu();
		  printf("请选择：>\n");
		  scanf("%d", &input);
		  
		  switch (input) {
		  case ADD:

			  AddContact(&contact);
			  break;
		  case DEL:
			  
			  DelContact(&contact);
			  break;
		  case MOD:

			  break;
		  case SEARCH:
			  SearchContact(&contact);
			  break;
		  case SORT:

			  break;
		  case PRINT:
			  PrintContact(&contact);
			  break;
		  case EXIT:

			  printf("退出\n");
			  break;

		  default:

			  printf("输入有误，请重新输入！\n");
			  break;
		  }

	} while (input);

	return 0;
}