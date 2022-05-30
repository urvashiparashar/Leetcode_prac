class Solution {
public:
    int firstOccurance(vector<int>& nums, int target, int low, int high){
        int first = -1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target)
            {
                first = mid;
                high = mid-1;
            }
            else if (nums[mid]>target)
                high = mid-1;
            else if(nums[mid]<target)
                low= mid+1;
        }
        return first;
    }
    
    int lastOccurance(vector<int>& nums, int target, int low, int high){
        int last = -1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target)
            {
                last = mid;
                low = mid+1;
            }
            else if (nums[mid]>target)
                high = mid-1;
            else if(nums[mid]<target)
                low= mid+1;
        }
        return last;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int low=0, high=nums.size()-1;
        
        int first = firstOccurance(nums, target, low,high);
        int last = lastOccurance(nums, target, low,high);
        
        ans.push_back(first);
        ans.push_back(last);
        
        return ans;
    }
};