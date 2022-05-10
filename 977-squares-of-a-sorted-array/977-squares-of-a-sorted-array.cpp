class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans(nums.size());
        int l=0,r=nums.size()-1,k=nums.size()-1;//k is piche se kyunki last ele sorted hota ja rha h at each iteration
        while(l<=r)
        {
            if(abs(nums[r])>abs(nums[l]))
            {
                ans[k]=nums[r]*nums[r]; //setting the kth ele at right posn
                r--; //r is bigger 
                k--; //k is bigger
            }
            else
            {
                ans[k]=nums[l]*nums[l];//setting the kth ele at right posn
                l++; //l is smaller
                k--; //k is bigger
            }
        }
        return ans;
        
    }
};