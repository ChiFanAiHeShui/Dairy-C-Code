#define _CRT_SECURE_NO_WARNINGS

#include "Queue.h"


typedef  int  BTDataType;//二叉树存放数据的类型

typedef struct BinaryTreeNode {//二叉树结构的定义

	struct BinaryTreeNode* left;//二叉树的左节点
	struct BinaryTreeNode* right;//二叉树的右节点
	BTDataType data;//二叉树的数据域

}BTNode;//将定义的二叉树结构名字重新简化定义

BTNode* BuyNode(BTDataType x) {//创建并且同时初始化二叉树的一个节点

	BTNode* node = (BTNode*)malloc(sizeof(BTNode));

	if (node == NULL) {
		printf("malloc fail!");
		exit(-1);
	}

	node->left = NULL;
	node->right = NULL;
	node->data = x;

	return node;
}

BTNode* CreatBinaryTree() {//模拟创建一个二叉树

	BTNode* node1 = BuyNode(1);
	BTNode* node2 = BuyNode(2);
	BTNode* node3 = BuyNode(3);
	BTNode* node4 = BuyNode(4);
	BTNode* node5 = BuyNode(5);
	BTNode* node6 = BuyNode(6);
	BTNode* node7 = BuyNode(7);

	node1->left = node2;
	node1->right = node4;
	node2->left = node3;
	node2->right = node7;
	node4->left = node5;
	node4->right = node6;

	return node1;

}

bool isCompleteBinaryTree(root) {
	Queue pq;
	QueueInit(&pq);//创建一个队列，利用其先进先出的特性并结合二叉树实现层序遍历

	if (root){//首先，判断二叉树是否是空树。不是空树，就将根节点入队列
		QueuePush(&pq, root);
	}
	

	while (!QueueEmpty(&pq)) {//判断是否为空队列，不是的话就可以进入程序中循环

		BTNode* front = QueueFront(&pq);//先将根节点的地址拿出来
		
		QueuePop(&pq);//将根节点弹出队列（注意:二叉树并没有被销毁）

		if (front){//当节点不为空，将其左右孩子入队列
			
			QueuePush(&pq, front->left);
			QueuePush(&pq, front->right);

		}
		else {//一旦发现空节点，直接跳出循环
			break;
		}
	}

	//如果后面全是空，则是完全二叉树
	//如果后面不全为空，则不是完全二叉树。

	if(!QueueEmpty(&pq)) {//接着判断跳出循环后剩下的队列是否为空，不为空则进入，否则返回true
		

		BTNode* front = QueueFront(&pq);

		QueuePop(&pq);

		if(front){
			
			QueueDestory(&pq);//***注意，这里也需要销毁，否则有内存溢出的潜在风险。

			return false;
			

		}

	}

	QueueDestory(&pq);
	return true;


}



int main(){

	BTNode* root = CreatBinaryTree();//模拟创建一个二叉树

	bool result = isCompleteBinaryTree(root);
	
	if (result) {
		printf("True");
	}
	else
	{
		printf("false");
	}

	return 0;
}