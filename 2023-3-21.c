#define _CRT_SECURE_NO_WARNINGS

/*
дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣

arr��һ������һά���顣

*/
//int main() {
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//
//	int* p = arr;
//
//	int i = 0;
//	int length = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < length; i++) {
//		printf("%d ", *(p + i));
//	}
//
//
//	return 0;
//}



//����ȡ�����ַ������ݵߵ������������
// 
// 
//#include<stdio.h>
//#include<string.h>
//int main() {
//    char str[10001] = { '\0' };
//    while (gets(str)) {  //ע�����ﲻ��ʹ��scanf("%d",str)���������ո��ַ����ᱻ��Ϊ�������롣
//        int len = strlen(str);
//        for (int i = len - 1; i >= 0; i--) {
//            printf("%c", str[i]);
//        }
//        printf("\n");
//    }
//}




/*���0��100000֮������С�ˮ�ɻ������������

��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ���������:153��1^3��5^3��3^3����153��һ����ˮ�ɻ�������



1523

1523 % 10 = 3
1523 /10 = 152

152%10 = 2
152 /10 = 15

15 %10 = 5
15/10 = 5

1% 10 = 1
1/10 = 0

*/

//#include <stdio.h>
//#include <math.h>
//
//int place(int num) {//��һ������λ��
//	int count = 0;
//	while (num) {
//		num = num / 10;
//		count++;
//	}
//	return count;
//}
//
//
//int is_shuixianhua(int num) {//�ж�һ�����Ƿ�Ϊˮ�ɻ������ǵĻ���������ֵ�������򷵻�-1.
//	int num1 = num;
//
//	int cifang = 0;
//
//	cifang = place(num);
//
//
//
//	int sum = 0;
//
//	while (num) {
//
//		sum += pow((num % 10), cifang);
//		num = num / 10;
//
//	}
//
//	if (num1 == sum) {
//		return sum;
//	}
//	else {
//		return -1;
//	}
//
//}
//
//
//
//int main() {
//
//	int i = 0;
//	int ret = 0;
//
//	for (i = 100; i < 100000; i++) {//��100��ʼ������������ˮ�ɻ�����
//		ret = is_shuixianhua(i);
//		if (-1 != ret) {
//			printf("%d ", ret);
//		}
//	}
//	
//	
//	return 0;
//}



//#include <stdio.h>
//#include <string.h>
//
//void xiabanbufen() {//��ӡ�����°벿��ͼ�εĺ���
//
//	char arr1[] = "             ";
//	char arr2[] = "*************";
//
//	int right = strlen(arr1) - 1;
//	int left = 0;
//
//
//	int i = 0;
//	for (i = 0; i < 6; i++) {
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//
//}
//
//
//int main() {
//
//	char arr1[] = "      *      ";
//	char arr2[] = "*************";
//
//	int mid = (strlen(arr1) - 1) / 2;
//	
//	int right = mid + 1;
//	int left = mid - 1;
//	
//	printf("%s\n", arr1);
//	while (left >= 0 && right <= strlen(arr1) - 1) {//��ӡ�����ϰ벿�ֵĺ���
//
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		right++;
//		left--;
//
//		printf("%s\n", arr1);
//	}
//		
//	xiabanbufen();
//	
//
//	return 0;
//}
                


/*
��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�

���磺2+22+222+2222+22222
*/

//#include <stdio.h>
//#include <string.h>
//
//
//int main() {
//
//    int tmp = 0;
//    int  a = 0;
//    int n = 0;
//    int sum = 0;
//    int i = 0;
//
//    scanf("%d%d", &a, &n);//���� 2 5 ��ʾ��Sn��ǰ������ͣ�ǰһ��������a����һ���Ǳ�ʾǰ����֮�͡�
//
//    for (i = 0; i < n; i++) {
//        tmp = tmp * 10 + a;
//        sum = sum + tmp;
//     }
//
//    printf("%d", sum);
//
//    return 0;
//}
