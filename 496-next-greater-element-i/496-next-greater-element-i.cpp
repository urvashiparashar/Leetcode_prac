class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(); 
        int m= nums2.size();
        //taking size of both vectors as we need to compare both
        //traversing the first array
        for(int i=0;i<n;i++)
        {
            int x=nums1[i];
            int k=0;
            while(nums2[k]!=x)
            {
                //no to consider equal ele as we need greater ele
                k++;
                //comes out as equal ele comes
            }
            for(;k<m;k++)
            {
                if(nums2[k]>x)
                {
                    //if ele of nums2 is greater than we have to break as greater ele is found
                    nums1[i]=nums2[k];
                    break;
                }
            }
            if(nums1[i]==x)
            {
                nums1[i]=-1;
            }
        }
        return nums1;
    }
};