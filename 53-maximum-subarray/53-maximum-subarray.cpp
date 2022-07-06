class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //kadane's algo: to get maximum sum subarray
        int maxi=nums[0];
        int sum=0;
        //traversing the array
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i]; //taking the every element of nums vector
            if(sum>maxi)
            {
                maxi=sum;
            }
            if(sum<0)
            {
                //if sum is negative then take sum as 0
                sum=0;
            }
        }
        return maxi;
        
    }
};