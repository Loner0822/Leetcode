/*******************************************************************************
 * Author	 : Loner0822
 * Email	 : 392549438@qq.com
 * Last modified : 2019-05-16 15:22
 * Filename	 : 19.cpp
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* top = new ListNode(0);
        top -> next = head;
        ListNode *tp1 = top, *tp2 = top;
        for (int i = 0; i <= n; ++ i)
            tp1 = tp1 -> next;
        while (tp1 != NULL) {
            tp1 = tp1 -> next;
            tp2 = tp2 -> next;
        }
        tp2 -> next = tp2 -> next -> next;
        return top -> next;
    }

};
