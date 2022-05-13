class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //lets take max,imn as first ele of array
        int max1=nums[0],min1=nums[0],ans=nums[0];
        //starting comparing from next ele
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<0)
                swap(max1,min1); //swap both max and min
            max1=max(nums[i],max1*nums[i]) ;//comparing the ele with the multiplication of previous max ele
            min1=min(nums[i],min1*nums[i]);
            
            //returning ans
            ans=max(max1,ans);
        }
        return ans;
        
    }
};