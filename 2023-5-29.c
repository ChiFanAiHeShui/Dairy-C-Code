#define _CRT_SECURE_NO_WARNINGS

/*
现有一链表的头指针 ListNode* pHead，给一定值x，
编写一段代码将所有小于x的结点排在其余结点之前，
且不能改变原来的数据顺序，返回重新排列后的链表的头指针。
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

       //首先，先创建两个带哨兵位的链表，一个用来存储小于x的节点
       //一个用来存储大于x的节点
        struct ListNode* low = (struct ListNode*)malloc(sizeof(ListNode));
        struct ListNode* high = (struct ListNode*)malloc(sizeof(ListNode));
        low->next = NULL;
        high->next = NULL;

        //先创建另外三个结构体指针变量来临时存储原链表的头指针
        //和创建的两个带哨兵位的俩表的头指针
        //方便后期回溯
        struct ListNode* cur = pHead;
        struct ListNode* return_low = low;
        struct ListNode* tmp_high = high;

        while (cur) {//先遍历原链表
            if (cur->val < x) {//当原链表中的值小于x的时候，将其放入到low链表中
                low->next = cur;
                low = cur;
            }
            else if (cur->val >= x) {////当原链表中的值大于x的时候，将其放入到high链表
                high->next = cur;
                high = cur;
            }
            cur = cur->next;//遍历原链表
        }

        low->next = tmp_high->next;//链接小链表和大链表

        high->next = NULL;//重点*******
        //这是极限边界，假如当原链表的最后一个节点
       //是小于x的情况时，大链表的最后一个节点
      //的next则不为空，打印的时候就会出现死循环，造成栈溢出

        return return_low->next;

    }
};
*/

/*
你两个单链表的头节点 headA 和 headB ，请你找出并返回两个单链表相交的起始节点。
如果两个链表不存在相交节点，返回 null 。
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


    //想找到交点，必须要两个长短链表在同一个位置同时向后遍历
    //当长短链表指向的下一个节点的地址一致时
    //这个节点就是交点。

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


    if (curA != curB) {//加个保险，并且提前判断下是否是相交链表
        //因为如果是相交的链表的话，那么最后一个指针的地址必然相等
        return NULL;
    }


    int count = abs(numA - numB);//不知道誰大谁小，abs是求绝对值的函数

    struct ListNode* longList = headA;
    struct ListNode* shortList = headB;

    if (numA < numB) {
        longList = headB;
        shortList = headA;
    }

    while (count--) {//让长链表的开始位置和短链表的开始位置一致，再向后同时遍历
        longList = longList->next;
    }


    while (longList != shortList) {//同时遍历短链表和长链表
        longList = longList->next;
        shortList = shortList->next;
    }

    return longList;
}

*/


