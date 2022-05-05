class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l=0,e=nums.size()-1; //2 pointers declared for traversing
        while(l<e)
        {
            int sum=nums[l]+nums[e];
            if(sum==target)
            {
                return {l+1,e+1}; //+1 due to result given for index
            }
            if(sum<target)
            {
                //if sum is big. then increment the l pointer and comapre with e
                l++;
            }
            else
            {
                e--;//target is small
            }
        }
        //if not sum found
        return {-1,-1};
    }
};