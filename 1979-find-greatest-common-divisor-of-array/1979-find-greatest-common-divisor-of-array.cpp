class Solution {
public:
    int gcd(int a,int b)
    {
        if(b==0)
            return a;
        return gcd(b,a%b);
        
    }
    int findGCD(vector<int>& nums) {
        //find the greatest and smallest in array
        int g=INT_MIN;
            int s=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            
            if(nums[i]>g)
            {
                g=nums[i];
            }
            if(nums[i]<s)
            {
                s=nums[i];
            }
        }
        return gcd(g,s);
        
    }
};