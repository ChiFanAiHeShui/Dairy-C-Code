#define _CRT_SECURE_NO_WARNINGS

/*
����һ�����ͷָ�� ListNode* pHead����һ��ֵx��
��дһ�δ��뽫����С��x�Ľ������������֮ǰ��
�Ҳ��ܸı�ԭ��������˳�򣬷����������к�������ͷָ�롣
*/

/*
/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/
/*
class Partition {
public:
    ListNode* partition(ListNode* pHead, int x) {
        // write code here

       //���ȣ��ȴ����������ڱ�λ������һ�������洢С��x�Ľڵ�
       //һ�������洢����x�Ľڵ�
        struct ListNode* low = (struct ListNode*)malloc(sizeof(ListNode));
        struct ListNode* high = (struct ListNode*)malloc(sizeof(ListNode));
        low->next = NULL;
        high->next = NULL;

        //�ȴ������������ṹ��ָ���������ʱ�洢ԭ�����ͷָ��
        //�ʹ������������ڱ�λ�������ͷָ��
        //������ڻ���
        struct ListNode* cur = pHead;
        struct ListNode* return_low = low;
        struct ListNode* tmp_high = high;

        while (cur) {//�ȱ���ԭ����
            if (cur->val < x) {//��ԭ�����е�ֵС��x��ʱ�򣬽�����뵽low������
                low->next = cur;
                low = cur;
            }
            else if (cur->val >= x) {////��ԭ�����е�ֵ����x��ʱ�򣬽�����뵽high����
                high->next = cur;
                high = cur;
            }
            cur = cur->next;//����ԭ����
        }

        low->next = tmp_high->next;//����С����ʹ�����

        high->next = NULL;//�ص�*******
        //���Ǽ��ޱ߽磬���統ԭ��������һ���ڵ�
       //��С��x�����ʱ������������һ���ڵ�
      //��next��Ϊ�գ���ӡ��ʱ��ͻ������ѭ�������ջ���

        return return_low->next;

    }
};
*/

/*
�������������ͷ�ڵ� headA �� headB �������ҳ������������������ཻ����ʼ�ڵ㡣
����������������ཻ�ڵ㣬���� null ��
*/

/*

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/*
struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB) {


    //���ҵ����㣬����Ҫ��������������ͬһ��λ��ͬʱ������
    //����������ָ�����һ���ڵ�ĵ�ַһ��ʱ
    //����ڵ���ǽ��㡣

    int numA = 0, numB = 0;
    struct ListNode* curA = headA;
    struct ListNode* curB = headB;

    while (curA) {
        numA++;
        curA = curA->next;
    }


    while (curB) {
        numB++;
        curB = curB->next;
    }


    if (curA != curB) {//�Ӹ����գ�������ǰ�ж����Ƿ����ཻ����
        //��Ϊ������ཻ������Ļ�����ô���һ��ָ��ĵ�ַ��Ȼ���
        return NULL;
    }


    int count = abs(numA - numB);//��֪���l��˭С��abs�������ֵ�ĺ���

    struct ListNode* longList = headA;
    struct ListNode* shortList = headB;

    if (numA < numB) {
        longList = headB;
        shortList = headA;
    }

    while (count--) {//�ó�����Ŀ�ʼλ�úͶ�����Ŀ�ʼλ��һ�£������ͬʱ����
        longList = longList->next;
    }


    while (longList != shortList) {//ͬʱ����������ͳ�����
        longList = longList->next;
        shortList = shortList->next;
    }

    return longList;
}

*/


