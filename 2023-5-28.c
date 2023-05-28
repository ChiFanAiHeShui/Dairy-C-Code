#define _CRT_SECURE_NO_WARNINGS

/*
���㵥�����ͷ�ڵ� head �����㷴ת���������ط�ת�������
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
struct ListNode* reverseList(struct ListNode* head) {

    //����ͷ�ڵ㴦׼��һ��NULL�ڵ㣬Ȼ���ٴ���һ����ʱ�ڵ�����ͷ�����ڵ�
    //����ÿһ�α���������һ�½ڵ��λ��
    struct ListNode* cur = NULL;

    while (head) {

        struct ListNode* tmp = (struct ListNode*)malloc(sizeof(struct ListNode));
        tmp = head->next;
        head->next = cur;
        cur = head;
        head = tmp;
    }
    return cur;

}
*/


/*
����һ�����������һ��ʱ�临�Ӷ�ΪO(n),����ռ临�Ӷ�ΪO(1)���㷨���ж����Ƿ�Ϊ���Ľṹ��

����һ�������ͷָ��A���뷵��һ��boolֵ���������Ƿ�Ϊ���Ľṹ����֤������С�ڵ���900��

����������
1->2->2->1
���أ�true
*/


/*
/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/
/*
class PalindromeList {
public:
    bool chkPalindrome(ListNode* A) {

        ListNode* head = A;
        ListNode* fast = A, * slow = A;

        while (fast && fast->next) {���ҵ��м�ڵ�
            slow = slow->next;
            fast = fast->next->next;
        }

        struct ListNode* cur = NULL;

        while (slow) {//���м�ڵ�Ϊ�磬���ú��������

            struct ListNode* tmp = (struct ListNode*)malloc(sizeof(struct ListNode));
            tmp = slow->next;
            slow->next = cur;
            cur = slow;
            slow = tmp;
        }

        while (cur) {//���м�ڵ�Ϊ�磬���ú���������
        //��ͷָ����м�ڵ��λ�����Ƚϣ�ֹͣ�������м�ڵ����ΪNULL
            if (cur->val != head->val) {
                return false;
            }
            else {
                head = head->next;
                cur = cur->next;
            }

        }
        return true;

    }
};
*/
