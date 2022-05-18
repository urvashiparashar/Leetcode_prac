class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        //take a variable to see that the duplicates are there or not
        int i=0; //this will be same if ele are same
        for(int j=1;j<nums.size();j++) //j started from 1 to see that if ele are same as that at i
        {
            if(nums[i]!=nums[j])
            {
                i++; //not same ele sp i will increment to compare from that index
                nums[i]=nums[j];
            }
        }
        return i+1; //required ans
    }
};