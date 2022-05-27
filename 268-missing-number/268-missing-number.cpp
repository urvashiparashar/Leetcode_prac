class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //in this o/p it is basically starting from 0 so we take a loop from 0 as well till size of array
        //sort vector
        
        sort(nums.begin(),nums.end());
        int c; //for storing the index of ele
        for(int i=0;i<nums.size();i++)
        {
            if(i!=nums[i])
            {
                c=i;
                break;
            }
        }
        return c;
    }
};