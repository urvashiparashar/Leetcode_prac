class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //using linked lists cycle
        int s=nums[0];
        int f=nums[0]; //starting at index 0
        do
        {
            s=nums[s]; //moving by one step
            f=nums[nums[f]]; //moving by two step
        }while(s!=f);
        //at the collision point take f at the first ele
        f=nums[0];
        while(s!=f)
        {
            s=nums[s]; //move s one step where it was earlier
            f=nums[f]; //now move both pointers by one step only
        }
        //when same pointers then that ele is duplicate
        return s;
    }
};