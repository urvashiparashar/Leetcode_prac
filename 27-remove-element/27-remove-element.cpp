class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int f=0,r=nums.size()-1;
        int k=0;
        while(f<=r)
        {
            if(nums[f]==val)
            {
                if(nums[r]==val)
                {
                    //f checks if ele is duplicate or not
                    r--;
                }
                    else
                    {
                        //swap values
                        nums[f]=nums[r];
                        f++;
                        r--;
                        k++;
                    }
            }
            
            
            else
            {
                f++;
                k++;
            }
        }
        return k;
    }
};