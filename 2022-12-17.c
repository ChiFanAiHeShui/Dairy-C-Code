#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>

void reverse(char* left, char* right) {
		assert(left != NULL);
		assert(right != NULL);
		while (left < right) 
		{
			char tmp = *left;
			*left = *right;
			*right = tmp;
			left++;
			right--;
		}
}

void left_move(char* arr,int k)
{
	assert(arr);
	int len = strlen(arr);
	reverse(arr, arr + k - 1);//ÄæÐò×ó±ß
	reverse(arr + k, arr + len - 1);//ÄæÐòÓÒ±ß
	reverse(arr, arr + len - 1);//ÄæÐòÕûÌå
}


int is_left_move(char* arr1, char* arr2) {
	int len_arr1 = strlen(arr1);
	int len_arr2 = strlen(arr2);
	int i = 0;
	if (len_arr1 != len_arr2) {
		return 0;
	}
	for (i = 0; i < len_arr1; i++) {
		left_move(arr1, 1);
		int ret = strcmp(arr1, arr2);
		if (ret == 0) {
			return 1;
		}
	}
	return 0;
}

int main() {

	char arr1[] = "ABCDEF";
	char arr2[] = "BCDEFA";
	int ret =is_left_move(arr1, arr2);
	if (ret == 1) {
		printf("YES\n");
	}
	else if (ret == 0) {
		printf("No\n");
	}
	return 0;
}
//void reverse(char* left,char* right) {
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right) 
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* arr,int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	reverse(arr, arr + k - 1);//ÄæÐò×ó±ß
//	reverse(arr + k, arr + len - 1);//ÄæÐòÓÒ±ß
//	reverse(arr, arr + len - 1);//ÄæÐòÕûÌå
//}

//void left_move(char* arr,int k) {
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k;i++) {
//		char tmp = *arr;
//		int j = 0;
//		for (j = 0; j < len - 1; j++) {
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = tmp;
//	}
//	
//}

//int main() {
//
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s", arr);
//	return 0;
//}