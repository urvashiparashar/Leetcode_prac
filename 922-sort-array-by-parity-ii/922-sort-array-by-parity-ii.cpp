class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int ei=0,oi=1;
        int n=nums.size();
        while(ei<n&&oi<n)
        {
            //if above cond is true
            if(nums[ei]%2==0)
                ei+=2; //as we have to consider the index and value should be even at the even index
            else if(nums[oi]%2!=0)
                oi+=2;
            //as we have to consider the index and value should be odd at the odd index
            else
                swap(nums[ei],nums[oi]);
        }
        return nums;
    }
};