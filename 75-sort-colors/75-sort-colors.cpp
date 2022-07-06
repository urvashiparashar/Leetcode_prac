class Solution {
public:
    void sortColors(vector<int>& nums) {
//         int r=0,w=0,b;
//         //red:0,white:1,blue:2
//         for(int i=0;i<nums.size();i++)
//         {
//             if(nums[i]==0)
//                 r++;
//             if(nums[i]==1)
//                 w++;
            
//         }
//         b=nums.size()-r-w; //the remaining are blue
//         nums.clear(); //clears the vector
//         //after counting red,white,blue we are pushing them in the vector and doing till the values of r,w,b is 0
//         while(r--)
//         {
//             nums.push_back(0);
//         }
//         while(w--)
//         {
//             nums.push_back(1);
//         }
//         while(b--)
//         {
//             nums.push_back(2);
//         }
        int l=0,mid=0,h=nums.size()-1;
        while(mid<=h)
        {
            switch(nums[mid])
            {
                case 0:
                    //for 0
                    swap(nums[l++],nums[mid++]);
                    break;
                case 1:
                    //for 1
                    mid++;
                    break;
                case 2:
                    swap(nums[mid],nums[h--]);
                    break;
            }
        }
    }
};