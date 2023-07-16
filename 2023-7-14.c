//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <assert.h>
//#include <stdlib.h>
//#include <time.h>
//
//
//void Swap(int * child, int* parent) {//���������±�Ϊchild��parent��ֵ
//
//	int tmp;
//	tmp = *child;
//	*child = *parent;
//	*parent = tmp;
//
//}
//
//
// void AdjustDown(int * a, int size, int parent) {//���µ����㷨
//
//	//size������ѵĽڵ������parent�Ǹ��ڵ㡣
//
//	int child = parent * 2 + 1;//�ȼ���С�ĺ��ӽڵ�Ϊ��ڵ�
//
// 	while (child < size) {
//
//		if (child + 1 < size && a[child + 1] < a[child]) {//����Һ��ӱ�����ҪС���򽻻�һ��
//			//�����Һ��Ӳ�һ�����ڣ����Ի���Ҫchild + 1 < size �������
//			++child;
//		}
//
//		if (a[child] < a[parent]) {
//			Swap(&a[child], &a[parent]);//����һ��parent��child�±�ָ���ֵ
//
//			//����һ��parent��child���±�
//			parent = child;
//			child = parent * 2 + 1;
//		}
//		else {//�������ӽڵ㶼�ȸ��ڵ�Ҫ����û��Ҫ�ٽ��н�����
//			break;
//		}
//
//	}
//}
//
//void PrintTopK(int* a,int n, int k ) {
//
//   //*****�����ȴ���һ����k�����ݵ�С��--��a�е�ǰk��Ԫ��������
//
//				//�ȴ���һ������Ϊk������
//				int* KMinHeap = (int*)malloc(sizeof(int) * k);
//				assert(KMinHeap);
//
//				//����Ҫ��������ݵ�ǰk��Ԫ�طŵ��´�����������ȥ
//				for (int i = 0; i < k; ++i) {
//					*(KMinHeap+ i) = a[i];
//				}
//
//				//��ǰk�����ݴ�����һ��С��
//				//****ע�⣬�����Ҫ���ǰk����������ʱ����Ҫ����С�ѣ������㷨������򲻳���
//				for (int i = (k - 1 - 1) / 2; i >= 0; --i){
//		
//					AdjustDown(KMinHeap, k, i);
//
//				}
//
//   //******��ʣ���N - k ������һһ��Ѷ����ݽ��бȽϣ�����ȶѶ����ݴ����������滻��
//
//				for (int j = k; j < n; ++j) {
//		
//					if (a[j] > KMinHeap[0]) {//��Ҫ����ĵ�k+1�������������С�ѶѶ�������ʱ
//
//						KMinHeap[0] = a[j];//����ֵ��С�ѶѶ������滻
//						AdjustDown(KMinHeap, k, 0);//�ٽ���һ�����µ����㷨
//
//					}
//				}
//				//��������ѭ�����֮�����k�����ݵ�С�Ѿ�����Ҫ��������ݵ�ǰk�����ֵ�ˡ�
//
//				//��ӡ����
//				for (int i = 0; i < k; i++) {
//					printf("%d ", *(KMinHeap + i));
//				}
//
//				printf("\n");
//
//}
//
//
//void TestTopK() {
//	int n = 10000;
//	int* a = (int*)malloc(sizeof(int) * n);//�ȴ���һ��10000���ռ�����飬����Ҳ����������������
//	
//	if (a == NULL) {
//		printf("free is fail");
//		exit(-1);
//	}
//
//	srand(time(0));
//
//	
//	for (int i = 0; i < n; i++) {//��������ݸ�ֵ100000���ڵ���
//		a[i] = rand() % 100000;
//	}
//
//	//���ⴴ��10��������ʾǰ10������������TopK�㷨�Ƿ�����ܹ��������
//	a[5] = 100000 + 1;
//	a[256] = 100000 + 2;
//	a[689] = 100000 + 3;
//	a[3558] = 100000 + 4;
//	a[26] = 100000 +  5;
//	a[569] = 100000 +  6;
//	a[985] = 100000 +  7;
//	a[9569] = 100000 +  8;
//	a[98] = 100000 +  9;
//	a[55] = 100000 + 10;
//
//	
//
//	PrintTopK(a,n, 10);//T
//
//
//} 
//
//
//int main() {
//	TestTopK();
//}