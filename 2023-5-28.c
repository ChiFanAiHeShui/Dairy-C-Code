#define _CRT_SECURE_NO_WARNINGS

/*
给你单链表的头节点 head ，请你反转链表，并返回反转后的链表。
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

    //先在头节点处准备一个NULL节点，然后再创建一个临时节点来从头遍历节点
    //并且每一次遍历都交换一下节点的位置
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
对于一个链表，请设计一个时间复杂度为O(n),额外空间复杂度为O(1)的算法，判断其是否为回文结构。

给定一个链表的头指针A，请返回一个bool值，代表其是否为回文结构。保证链表长度小于等于900。

测试样例：
1->2->2->1
返回：true
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

        while (fast && fast->next) {先找到中间节点
            slow = slow->next;
            fast = fast->next->next;
        }

        struct ListNode* cur = NULL;

        while (slow) {//以中间节点为界，倒置后面的链表

            struct ListNode* tmp = (struct ListNode*)malloc(sizeof(struct ListNode));
            tmp = slow->next;
            slow->next = cur;
            cur = slow;
            slow = tmp;
        }

        while (cur) {//以中间节点为界，倒置后面的链表后
        //让头指针和中间节点的位置向后比较，停止条件是中间节点最后为NULL
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
