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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //using 2 stacks
        stack<int> s1,s2;
        
        //tranfer the list ele to s1,s2
        while(l1) //till l1 is not empty
        {
            s1.push(l1->val);
            l1=l1->next;
        }
        while(l2) //till l1 is not empty
        {
            s2.push(l2->val);
            l2=l2->next;
        }
        ListNode* dummy=NULL ;//create a dummy node
        int carry=0;
        while(!s1.empty()||!s2.empty()||carry!=0)
        {
            //as 3 cond are true coz carry 0 will have no effect
            int sum=carry;
            if(!s1.empty())
            {
                //till s1 is not empty
                sum+=s1.top(); //take top value of s1
                //and pop that ele from s1
                s1.pop();
            }
            if(!s2.empty())
            {
                //till s1 is not empty
                sum+=s2.top(); //take top value of s1
                //and pop that ele from s1
                s2.pop();
            }
            ListNode* temp=new ListNode(sum%10); //a new node for storing the remainder each time
            temp->next=dummy ; //NULL
            dummy=temp; //value of dummy is equal to rem value
            carry=sum/10 ; //helps to get carry value
            //as we know thw sum is the remaninder 
        }
        return dummy; //dummy stores the rem each time
    }
};