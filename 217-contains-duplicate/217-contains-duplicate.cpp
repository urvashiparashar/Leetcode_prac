class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int t=0;
        for(int j=0;j<n-1;j++)
        {
            if(nums[j]==nums[j+1])
            {
                t=1;
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