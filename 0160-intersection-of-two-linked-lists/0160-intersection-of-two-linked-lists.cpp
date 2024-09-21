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
    ListNode *getIntersectionNode(ListNode *l1, ListNode *l2) {
       ListNode *slow=l1;
       ListNode *fast=l2;
       while(slow!=fast)
       {
        if(slow==NULL)
          slow=l2;
        else
          slow=slow->next;

        if(fast==NULL)
          fast=l1;
        else  
          fast=fast->next;
       }
       return slow;
    }
};