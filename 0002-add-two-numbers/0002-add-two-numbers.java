/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        int carry=0;
        ListNode curr=new ListNode(0);
        ListNode head=curr;
        while(l1!=null&&l2!=null)
            {
            int ans=l1.val+l2.val+carry;
            carry=0;
            if(ans>9)
                {
                ans=ans%10;
                carry=1;
            }
            curr.next=new ListNode(ans);
            curr=curr.next;
            l1=l1.next;
            l2=l2.next;
        }
        while(l1!=null)
            {
            int ans=carry+l1.val;
            carry=0;
            if(ans>9)
                {
                ans=ans%10;
                carry=1;
            }
            curr.next=new ListNode(ans);
            curr=curr.next;
            l1=l1.next;
                
        }
        while(l2!=null)
            {
            int ans=carry+l2.val;
            carry=0;
            if(ans>9)
                {
                ans=ans%10;
                carry=1;
            }
            curr.next=new ListNode(ans);
            curr=curr.next;
            l2=l2.next;
                
        }
        if(carry>0)
            {
            curr.next=new ListNode(carry);
        }
        return head.next;
        
    }
}