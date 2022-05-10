class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans(nums.size());
        int l=0,r=nums.size()-1,k=nums.size()-1;
        while(l<=r)
        {
            if(abs(nums[r])>abs(nums[l]))
            {
                ans[k]=nums[r]*nums[r];
                r--;
                k--;
            }
            else
            {
                ans[k]=nums[l]*nums[l];
                l++;
                k--;
            }
        }
        return ans;
        
    }
};