#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <time.h>

typedef  int BTDataType;//������������ݵ�����

typedef struct BinaryTreeNode {//�������ṹ�Ķ���

	struct BinaryTreeNode* left;//����������ڵ�
	struct BinaryTreeNode* right;//���������ҽڵ�
	BTDataType data;//��������������

}BTNode;//������Ķ������ṹ�������¼򻯶���

BTNode* BuyNode(BTDataType x) {//��������ͬʱ��ʼ����������һ���ڵ�

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

BTNode* CreatBinaryTree() {//ģ�ⴴ��һ��������
	
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

void PreOrder(BTNode* root) {//ǰ�����
	
	/*
	//�����ʵ����������ͺ��������Ļ���ֻ��Ҫ�� printf("%d ", root->data);
	������
	
	PreOrder(root->left);//�ݹ������ӡ������������
	PreOrder(root->right);//�ݹ������ӡ������������

	�����仰���м�ͺ���λ�þͿ����ˡ�

	*/



	if (root == NULL) {
		printf("& ");
		return;//�������Ҫ�����������Ȼ�޷����ز�ʵ�ֵݹ��ˡ�
		       //��˼���൱������ݹ鵽�սڵ�ʱ����Ҫ�����ַ���ص���һ������ʱ�ĺ�����ȥ
    }

	printf("%d ", root->data);//��ӡ���ڵ������

	PreOrder(root->left);//�ݹ������ӡ������������

	PreOrder(root->right);//�ݹ������ӡ������������
}

int count;//����ʹ��ȫ�ֱ�����ͳ����ڵ�����������ʹ�þֲ������Ļ�
              //��ôcount��ֵ���ײ���׼ȷ����Ϊ��ÿ�εݹ���õ�ʱ�򶼻������м�1
              //��ô���ݿ���һ����ñȽϴ�


void TreeSize(BTNode* root) {//��������Ľڵ㷽��һ--��Ҫ����ȫ�ֱ���

	if (root == NULL) {
		return;
	}
	count++;
	TreeSize(root->left);
	TreeSize(root->right);

}


int  TreeSize2(BTNode* root) {//��������Ľڵ㷽����--��������ȫ�ֱ���

	return root == NULL ? 0 : 
		TreeSize2(root->left) + TreeSize2(root->right) +1;

}


int TreeLeafSize(BTNode* root) {

	/*
	* //����һ
	* //��Ҫ����ȫ�ֱ�����ʵ��ͳ�ƶ�������Ҷ�ӽڵ�����
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


	//������
	//����ʹ��ȫ�ֱ�����ͳ��Ҷ�ӽڵ������
	if (root == NULL) {//�����ڵ�Ϊ�յ�ʱ��ֱ�ӷ���0
		return 0;
	}

	if (root->right == NULL && root->left == NULL)//�����ڵ�ΪҶ�ӽڵ��ʱ�򣬷��� 1
		return 1;

	
	return TreeLeafSize(root->left) + TreeLeafSize(root->right);
	//�ݹ���������������ֱ�ͳ������������Ҷ�ӽڵ������ٽ�����ӵó����Ľ����

}

int main() {

	BTNode* root =  CreatBinaryTree();//ģ�ⴴ��һ��������

	PreOrder(root);//ǰ�����
	printf("\n");

	count = 0;//����ǰ����count��ֵ��ʼ��һ�£���ֹ��ǰ��ı�����count��ֵ��������ͳ�Ʋ�׼ȷ
	TreeSize(root);
	printf("����������Ľڵ�����Ϊ��%d \n", count);

	int nums = TreeSize2(root);
	printf("����������Ľڵ�����Ϊ��%d \n", count);

	count = 0;
	int LeafSize = TreeLeafSize(root);
	printf("�����������Ҷ�ӽڵ������Ϊ��%d ",LeafSize);


	return 0;
}
