#define _CRT_SECURE_NO_WARNINGS

#include "Queue.h"


typedef  int  BTDataType;//������������ݵ�����

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
	QueueInit(&pq);//����һ�����У��������Ƚ��ȳ������Բ���϶�����ʵ�ֲ������

	if (root){//���ȣ��ж϶������Ƿ��ǿ��������ǿ������ͽ����ڵ������
		QueuePush(&pq, root);
	}
	

	while (!QueueEmpty(&pq)) {//�ж��Ƿ�Ϊ�ն��У����ǵĻ��Ϳ��Խ��������ѭ��

		BTNode* front = QueueFront(&pq);//�Ƚ����ڵ�ĵ�ַ�ó���
		
		QueuePop(&pq);//�����ڵ㵯�����У�ע��:��������û�б����٣�

		if (front){//���ڵ㲻Ϊ�գ��������Һ��������
			
			QueuePush(&pq, front->left);
			QueuePush(&pq, front->right);

		}
		else {//һ�����ֿսڵ㣬ֱ������ѭ��
			break;
		}
	}

	//�������ȫ�ǿգ�������ȫ������
	//������治ȫΪ�գ�������ȫ��������

	if(!QueueEmpty(&pq)) {//�����ж�����ѭ����ʣ�µĶ����Ƿ�Ϊ�գ���Ϊ������룬���򷵻�true
		

		BTNode* front = QueueFront(&pq);

		QueuePop(&pq);

		if(front){
			
			QueueDestory(&pq);//***ע�⣬����Ҳ��Ҫ���٣��������ڴ������Ǳ�ڷ��ա�

			return false;
			

		}

	}

	QueueDestory(&pq);
	return true;


}



int main(){

	BTNode* root = CreatBinaryTree();//ģ�ⴴ��һ��������

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