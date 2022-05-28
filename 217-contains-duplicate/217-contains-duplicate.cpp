class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size(); 
        sort(nums.begin(),nums.end()); //sorting array in ascending order
        int t=0; //taking a var and initilaisng it as 0
        for(int j=0;j<n-1;j++)
        {
            if(nums[j]==nums[j+1])
            {
                t=1;//changing value of t to 1 as soon as duplicate is found i.e consecutive two ele are same
            }
        }
        if(t==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};