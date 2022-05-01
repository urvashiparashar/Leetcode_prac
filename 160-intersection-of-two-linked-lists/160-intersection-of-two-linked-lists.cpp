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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        if(headA==NULL ||headB==NULL)
        {
            //if any of the list is empty then return null
            return NULL;
        }
        ListNode *a=headA;
        ListNode* b=headB;
        
        while(a!=b) //when a and b points same nodes(same value) then it is an intersection point
        { 
            a = a==NULL?headB:a->next; //if a becomes null then take the pointer to list b so to start from starting node for b
            b = b==NULL?headA:b->next; //if b becomes null then take the pointer to list a so to start comparing with every ele from starting of a
        }
        
        return a;
        
    }
};