class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       vector<int>mp;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int n1 = nums1.size();
        int n2=nums2.size();
        int i=0,j=0;
        while(i<n1 && j<n2)
        {
            if(i>0 && nums1[i]==nums1[i-1])
            {
               
                i++;
                 continue;
            }
            if(nums1[i]<nums2[j])
            {
                i++;
                
            }
            else if(nums1[i]>nums2[j])
            {
                j++;
            }
            else 
            {
                mp.push_back(nums1[i]);
                i++;j++;
            }
        }
        return mp;
        
    
    }
};