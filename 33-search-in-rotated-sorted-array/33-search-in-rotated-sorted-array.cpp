class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int l=0;
        int h=nums.size()-1;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(nums[mid]==target) //ele found at mid of array
                return mid;
            if(nums[l]<=nums[mid]) //if ele at low posn less than at mid
            {
                //in range of low to mid as it is rotated
                if(target>=nums[l] && target<=nums[mid])
                {
                    h=mid; //so that we can search in l->mid
                }
                else
                {
                    l=mid+1; //from mid->h
                }
            }
            else if(nums[l]>nums[mid])//rotated sorted array
            {
                if(target>=nums[mid]&& target<=nums[h])
                {
                    l=mid+1; //beacuse target is greater: mid+1->h
                }
                else
                {
                h=mid; //before mid : l->mid
                }
            
            }
            
        }
        //target not found
        return -1;
        
    }
};