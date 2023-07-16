//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <assert.h>
//#include <stdlib.h>
//#include <time.h>
//
//
//void Swap(int * child, int* parent) {//交换堆中下标为child和parent的值
//
//	int tmp;
//	tmp = *child;
//	*child = *parent;
//	*parent = tmp;
//
//}
//
//
// void AdjustDown(int * a, int size, int parent) {//向下调整算法
//
//	//size是这个堆的节点个数，parent是父节点。
//
//	int child = parent * 2 + 1;//先假设小的孩子节点为左节点
//
// 	while (child < size) {
//
//		if (child + 1 < size && a[child + 1] < a[child]) {//如果右孩子比左孩子要小，则交换一下
//			//并且右孩子不一定存在，所以还需要child + 1 < size 这个条件
//			++child;
//		}
//
//		if (a[child] < a[parent]) {
//			Swap(&a[child], &a[parent]);//交换一下parent和child下标指向的值
//
//			//交换一下parent和child的下标
//			parent = child;
//			child = parent * 2 + 1;
//		}
//		else {//两个孩子节点都比父节点要大，则没必要再进行交换了
//			break;
//		}
//
//	}
//}
//
//void PrintTopK(int* a,int n, int k ) {
//
//   //*****首先先创建一个有k个数据的小堆--用a中的前k个元素来创建
//
//				//先创建一个长度为k的数组
//				int* KMinHeap = (int*)malloc(sizeof(int) * k);
//				assert(KMinHeap);
//
//				//将需要排序的数据的前k个元素放到新创建的数组中去
//				for (int i = 0; i < k; ++i) {
//					*(KMinHeap+ i) = a[i];
//				}
//
//				//将前k个数据创建成一个小堆
//				//****注意，如果是要求出前k个最大的数据时，需要创建小堆，以下算法大堆排序不出来
//				for (int i = (k - 1 - 1) / 2; i >= 0; --i){
//		
//					AdjustDown(KMinHeap, k, i);
//
//				}
//
//   //******后将剩余的N - k 个数据一一与堆顶数据进行比较，如果比堆顶数据大，则进行入堆替换。
//
//				for (int j = k; j < n; ++j) {
//		
//					if (a[j] > KMinHeap[0]) {//需要排序的第k+1个数据如果大于小堆堆顶的数据时
//
//						KMinHeap[0] = a[j];//将其值和小堆堆顶数据替换
//						AdjustDown(KMinHeap, k, 0);//再进行一次向下调整算法
//
//					}
//				}
//				//这样，在循环完成之后，这个k个数据的小堆就是需要排序的数据的前k个最大值了。
//
//				//打印数据
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
//	int* a = (int*)malloc(sizeof(int) * n);//先创建一个10000个空间的数组，这里也可以是其他的数据
//	
//	if (a == NULL) {
//		printf("free is fail");
//		exit(-1);
//	}
//
//	srand(time(0));
//
//	
//	for (int i = 0; i < n; i++) {//给这个数据赋值100000以内的数
//		a[i] = rand() % 100000;
//	}
//
//	//另外创建10个数来表示前10个最大的数，看TopK算法是否真的能够排序出来
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