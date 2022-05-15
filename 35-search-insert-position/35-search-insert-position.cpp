class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //same approach as of binary search
        
        int l=0,h=nums.size()-1;
        while(l<=h)
        {
            int m=l+(h-l)/2;
            if(nums[m]==target) //ele found
                return m;
            else if(nums[m]<target) //target is more than middle ele
                l=m+1;
            else
                h=m-1; //target s less than mid ele
        }
        return l; //if ele found gives value of low that will be equal to mid value else if not found give value of low+1 so to insert the value
        
    }
};