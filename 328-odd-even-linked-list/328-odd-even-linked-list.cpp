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
    //here odd and even are referred by indexes(place)
public:
    ListNode* oddEvenList(ListNode* head) {
        //if list is empty or only one node
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        //declaring odd head/tail and even head/tail as NULL
        ListNode* oh=NULL;
        ListNode* ot=NULL;
        ListNode* eh=NULL;
        ListNode* et=NULL;
        ListNode* itr=head; //pointing to head
        int ct=1;
        while(itr!=NULL)
        {
            if(ct%2!=0) //starting from 1-odd posn
            {
                if(oh==NULL)
                {
                    oh=itr;
                    ot=itr;
                }
                else
                {
                    ot->next=itr;
                    ot=itr;
                }
            }
            else
            {
                //even posn
                if(eh==NULL)
                {
                    eh=itr;
                    et=itr;
                }
                else
                {
                    et->next=itr;
                    et=itr;
                }
            }
            itr=itr->next; //itr ko badaho for traversing nodes
            ct++; //increment the posn
        }
        if(oh==NULL || eh==NULL)
        {
            return head; //empty or only one node
        }
        else
        {
            ot->next=eh; //the last node i.t ot points to the one at place number 2(even)
            et->next=NULL; //last node
            return oh;
        }
        
        
    }
};