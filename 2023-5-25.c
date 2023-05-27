#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
小乐乐最近在课上学习了如何求两个正整数的最大公约数与最小公倍数，但是他竟然不会求两个正整数的最大公约数与最小公倍数之和，请你帮助他解决这个问题。

输入描述：
每组输入包含两个正整数n和m。(1 ≤ n ≤ 109，1 ≤ m ≤ 109)

输出描述：
对于每组输入，输出一个正整数，为n和m的最大公约数与最小公倍数之和。
示例1
输入：
10 20
复制
输出：
30
复制
示例2
输入：
15 20
复制
输出：
65

*/


/*
* 
#include <stdio.h>

int main() {

    long long m,n;
    long long  minNum ;//存储m和n中的较小值
    long long  maxNum;//存储m和n中的较大值



    scanf("%lld %lld",&m,&n);

    if(m >= n){
        minNum = n;
        maxNum = m;
    }else{
        minNum = m;
        maxNum = n;
    }

long long tmp_max = maxNum;
long long tmp_min = minNum;

    while(tmp_max % tmp_min != 0){//求最大公约数

/*
15 20 的公约数

有余数的话，先大小数换位置，然后将余数换到被除数的位置
20 / 15 = 1 .... 5
15 / 5 = 3
当余数为0的时候，被除数就是最大公约数
所以，5为最大公约数





long long tmp = tmp_max % tmp_min;
tmp_max = tmp_min;
tmp_min = tmp;

    }

    //这两个整数的乘积等于这个两个数的最大公约数和最小公倍数的乘积
    //所以，最小公倍数也就为这两个数的乘积除以最大公约数
    long long max = maxNum * minNum / tmp_min;

    printf("%lld", max + tmp_min);






}

*/


/*
求链表的中间节点
（如果有两个中间节点，则返回第二个节点）
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
struct ListNode* middleNode(struct ListNode* head) {

    //利用快慢指针，只需要循环一次就可以找出

    struct ListNode* slow, * fast;

    fast = slow = head;

    while (fast && fast->next) {//当奇数个的时候，fast最后指向的是末尾节点
        //当为偶数个的时候，fast最后指向的是末尾节点后面的空节点。

        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;



    /*
    //需要循环两次才能找到
    struct ListNode* cur = head;
    int sum = 0;//节点的数量
    int times ;//循环的次数

    while(cur){
           sum+=1;
           cur = cur->next;
    }

    times = (sum / 2) + 1;//从头结点开始找到中间节点需要循环的次数

    for(int i = 0; i < times-1;i++){// times需要减一
         head = head->next;
        }
    return head;

    */

//}

