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
    ListNode* swapPairs(ListNode* head) {
        //using recursion
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        ListNode* temp=head->next;//2nd node
        head->next=swapPairs(head->next->next); //takes to third node directly
        temp->next=head; //points to first node
        return temp; //after swapping printing from temp
        
    }
};