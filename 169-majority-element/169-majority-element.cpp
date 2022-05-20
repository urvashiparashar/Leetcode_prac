class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ct=0,maj=nums[0];
        for(int ele:nums)
        {
            if(ele==maj) //increment count if ele is same
            {
                ct++;
            }
            else
            {
                ct--; //as soon as we get diff ele then decre the count and take the ele as maj when count becomes 0
                if(ct==0)
                {
                    maj=ele;
                    ct=1; //after taking the maj ele take it's count as 1
                }
            }
        }
        return maj; //return the ele when it will be major
    }
    
};