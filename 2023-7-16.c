#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <time.h>

typedef  int BTDataType;//二叉树存放数据的类型

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

	node1->left = node2;
	node1->right = node4;
	node2->left = node3;
	node4->left = node5;
	node4->right = node6;

	return node1;

}

void PreOrder(BTNode* root) {//前序遍历
	
	/*
	//如果想实现中序遍历和后续遍历的话，只需要将 printf("%d ", root->data);
	这句放在
	
	PreOrder(root->left);//递归遍历打印左子树的数据
	PreOrder(root->right);//递归遍历打印右子树的数据

	这两句话的中间和后面位置就可以了。

	*/



	if (root == NULL) {
		printf("& ");
		return;//这里必须要加上这个，不然无法返回并实现递归了。
		       //意思就相当于在其递归到空节点时，需要将其地址返回到上一级调用时的函数中去
    }

	printf("%d ", root->data);//打印根节点的数据

	PreOrder(root->left);//递归遍历打印左子树的数据

	PreOrder(root->right);//递归遍历打印右子树的数据
}

int count;//必须使用全局变量来统计其节点的数量，如果使用局部变量的话
              //那么count的值容易不够准确，因为你每次递归调用的时候都会对其进行加1
              //那么数据可能一般会变得比较大


void TreeSize(BTNode* root) {//求二叉树的节点方法一--需要设置全局变量

	if (root == NULL) {
		return;
	}
	count++;
	TreeSize(root->left);
	TreeSize(root->right);

}


int  TreeSize2(BTNode* root) {//求二叉树的节点方法二--不用设置全局变量

	return root == NULL ? 0 : 
		TreeSize2(root->left) + TreeSize2(root->right) +1;

}


int TreeLeafSize(BTNode* root) {

	/*
	* //方法一
	* //需要利用全局变量来实现统计二叉树的叶子节点数量
	* 
	if (root == NULL) {
		return;
    }

	if (root->right == NULL && root->left == NULL) {
		count++;
		return;
	}

	TreeLeafSize(root->left);

	TreeLeafSize(root->right);


	*/


	//方法二
	//不用使用全局变量来统计叶子节点的数量
	if (root == NULL) {//当根节点为空的时候直接返回0
		return 0;
	}

	if (root->right == NULL && root->left == NULL)//当根节点为叶子节点的时候，返回 1
		return 1;

	
	return TreeLeafSize(root->left) + TreeLeafSize(root->right);
	//递归遍历左右子树来分别统计左右子树的叶子节点数量再将其相加得出最后的结果。

}

int main() {

	BTNode* root =  CreatBinaryTree();//模拟创建一个二叉树

	PreOrder(root);//前序遍历
	printf("\n");

	count = 0;//先提前将其count的值初始化一下，防止其前面改变了其count的值导致最终统计不准确
	TreeSize(root);
	printf("这个二叉树的节点数量为：%d \n", count);

	int nums = TreeSize2(root);
	printf("这个二叉树的节点数量为：%d \n", count);

	count = 0;
	int LeafSize = TreeLeafSize(root);
	printf("这个二叉树的叶子节点的数量为：%d ",LeafSize);


	return 0;
}
