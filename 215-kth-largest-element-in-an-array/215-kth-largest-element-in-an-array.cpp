class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        //approach-1:
        
//         sort(nums.begin(),nums.end()); //sort array so that it will be easy finding the kth largest ele
        
//         int x = nums.size() - k;
        
//         return nums[x];
        
        //approach-2:
        //using n=maxheap
        priority_queue<int>maxheap;
        for(int i=0;i<nums.size();i++)
        {
            maxheap.push(nums[i]); //insert ele according to priority
        }
        //removing ele from back
        while(k>1)
        {
            maxheap.pop();
            k--;
        }
        int ans=maxheap.top();
        return ans;
        
        
    }
};