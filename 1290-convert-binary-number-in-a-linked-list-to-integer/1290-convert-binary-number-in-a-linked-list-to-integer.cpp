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
    int getDecimalValue(ListNode* head) {
        
        //take temp for traversing entire list
        ListNode* temp=head; 
        int n=0;
        while(temp!=NULL)
        {
            temp=temp->next;
            n++; //for power used for converting to decimal
        }
        int ans=0; //storing the number
        temp=head; //take temp back to head for knowing which node is 1
        while(temp!=NULL)
        {
            if(temp->val==1) //no need of multipliyng it with 0
            {
                ans+=pow(2,n-1);
            }
            n--;
            temp=temp->next;
        }
        return ans;
        
    }
};