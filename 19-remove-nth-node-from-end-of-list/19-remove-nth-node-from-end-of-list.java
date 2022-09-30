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
    public ListNode removeNthFromEnd(ListNode head, int n) {
        //list empty
        if(head.next==null)
        {
            return null; //list emptied
        }
        
        //calculate size
        int size=0;
        ListNode curr=head; //starting from head for calculating size
        while(curr!=null)
        {
            curr=curr.next; //point to next node
            size++; //increase size    
        }
        if(n==size)
        {
            return head.next;
        }
        int indextosearch=size-n; //prevnode from first (left of nth node)
        ListNode prev=head; // curr assigned to head
        int i=1;
        while(i<indextosearch)
        {
            prev=prev.next;
            i++;
        }
        prev.next=prev.next.next;
        return head;
    }
}