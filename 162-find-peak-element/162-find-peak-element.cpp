class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int ans; //for storing the answer of peak element
        if(nums.size()==1)
        {
            //only one element
            return 0;
            
        }
        else if(nums.size()==2)
        {
            if(nums[0]>nums[1])
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
        else
        {
            //traversing whole vector
            if (nums[0] > nums[1])
            {
                return 0;
            }
            else
            {
                for (int i = 1; i < nums.size() - 1; i++)
                {
                    if (nums[i - 1] < nums[i] and nums[i] > nums[i + 1])
                    {
                        ans = i;
                        break;
                    }
                }
            }
            return ans;
        }
        
        
    }
};