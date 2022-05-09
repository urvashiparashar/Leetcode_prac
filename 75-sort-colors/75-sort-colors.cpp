class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r=0,w=0,b;
        //red:0,white:1,blue:2
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                r++;
            if(nums[i]==1)
                w++;
            
        }
        b=nums.size()-r-w; //the remaining are blue
        nums.clear(); //clears the vector
        while(r--)
        {
            nums.push_back(0);
        }
        while(w--)
        {
            nums.push_back(1);
        }
        while(b--)
        {
            nums.push_back(2);
        }
    }
};