class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //kadane's algo
        int sum=0;
        int maxi=nums[0];
        for(int i=0;i<nums.size();i++)
        {
           //traversing array
            //updating sum
            sum+=nums[i];
           //update max
            maxi=max(maxi,sum);
            if(sum<0)
            {
                sum=0;
                
            }
        }
        return maxi;
        
    }
};