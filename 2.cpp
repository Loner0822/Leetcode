/*******************************************************************************
 * Author	 : Loner0822
 * Email	 : 392549438@qq.com
 * Last modified : 2018-02-21 11:50
 * Filename	 : 2.cpp
 * Description	 : 
 * *****************************************************************************/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res = new ListNode(0);
        ListNode* res_head = res;
        int tmp = 0;
        while (tmp || l1 || l2) {
            int val = tmp;
            if (l1) 
                val += l1 -> val;
            if (l2)
                val += l2 -> val;
            tmp = val / 10;
            ListNode* now = new ListNode(val % 10);
            res -> next = now;
            res = res -> next;
            if (l1) 
                l1 = l1 -> next;
            if (l2)
                l2 = l2 -> next;
        }
        return res_head -> next;
    }
};
