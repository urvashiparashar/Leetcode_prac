/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        //2 pointers approach
        ListNode* slow=head;
        ListNode* fast=head;
        //the above pointers used to find the middle ele
        //slow travels one node while fast travels 2 nodes
        if(head==NULL)
        {
            //empty list
            return NULL;
        }
        if(head->next==NULL)
        {
            //only one ele
            return NULL;
        }
        while((fast!=NULL)&&(fast->next!=NULL))
        {
            //since fast points to head so it will check whether head is null or not and whether it is having only one ele or not 
            //travelling of slow and fast
            slow=slow->next; //one node
            fast=fast->next->next; //2 nodes
        }
        //comes out of loop  as soon as fast reaches null
        ListNode* curr=head;
        ListNode* temp=slow->next; //points to next conn of ele after it is deleted
        while(curr->next!=slow)
        {
            //for list traversing as curr points to head till slow to get mid ele
            curr=curr->next;
        }
        //comes out of loop when ele is found
        curr->next=temp ;//connection node
        return head ; //return list
        
        
    }
};