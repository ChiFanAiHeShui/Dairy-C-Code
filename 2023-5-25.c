#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
С��������ڿ���ѧϰ����������������������Լ������С����������������Ȼ���������������������Լ������С������֮�ͣ�������������������⡣

����������
ÿ�������������������n��m��(1 �� n �� 109��1 �� m �� 109)

���������
����ÿ�����룬���һ����������Ϊn��m�����Լ������С������֮�͡�
ʾ��1
���룺
10 20
����
�����
30
����
ʾ��2
���룺
15 20
����
�����
65

*/


/*
* 
#include <stdio.h>

int main() {

    long long m,n;
    long long  minNum ;//�洢m��n�еĽ�Сֵ
    long long  maxNum;//�洢m��n�еĽϴ�ֵ



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

    while(tmp_max % tmp_min != 0){//�����Լ��

/*
15 20 �Ĺ�Լ��

�������Ļ����ȴ�С����λ�ã�Ȼ������������������λ��
20 / 15 = 1 .... 5
15 / 5 = 3
������Ϊ0��ʱ�򣬱������������Լ��
���ԣ�5Ϊ���Լ��





long long tmp = tmp_max % tmp_min;
tmp_max = tmp_min;
tmp_min = tmp;

    }

    //�����������ĳ˻�������������������Լ������С�������ĳ˻�
    //���ԣ���С������Ҳ��Ϊ���������ĳ˻��������Լ��
    long long max = maxNum * minNum / tmp_min;

    printf("%lld", max + tmp_min);






}

*/


/*
��������м�ڵ�
������������м�ڵ㣬�򷵻صڶ����ڵ㣩
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

    //���ÿ���ָ�룬ֻ��Ҫѭ��һ�ξͿ����ҳ�

    struct ListNode* slow, * fast;

    fast = slow = head;

    while (fast && fast->next) {//����������ʱ��fast���ָ�����ĩβ�ڵ�
        //��Ϊż������ʱ��fast���ָ�����ĩβ�ڵ����Ŀսڵ㡣

        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;



    /*
    //��Ҫѭ�����β����ҵ�
    struct ListNode* cur = head;
    int sum = 0;//�ڵ������
    int times ;//ѭ���Ĵ���

    while(cur){
           sum+=1;
           cur = cur->next;
    }

    times = (sum / 2) + 1;//��ͷ��㿪ʼ�ҵ��м�ڵ���Ҫѭ���Ĵ���

    for(int i = 0; i < times-1;i++){// times��Ҫ��һ
         head = head->next;
        }
    return head;

    */

//}

