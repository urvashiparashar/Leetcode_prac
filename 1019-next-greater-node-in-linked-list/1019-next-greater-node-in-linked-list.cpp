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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>ans; //for storing answers
        ListNode* curr=head;
        while(curr!=NULL)
        {
            int max=curr->val; //assumes node1 value as max
            ListNode* temp=curr->next; //next node
            while(temp!=NULL)
            {
                int val=temp->val;
                //comparing both 
                if(max<val)
                {
                    max=val; //make max as val: greater
                    break; //because it is said to find next greater then stop here
                }
                temp=temp->next; //increment temp
            }
            if(max==curr->val) //last node that is greatest
            {
                ans.push_back(0) ;//since no node after
            }
            else
            {
                ans.push_back(max);
            }
            curr=curr->next; //to go to next nodes
        }
        return ans;
    }
};