class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>nums(m+n); //creating a vector of this size
int a = 0;
int b = 0;
int c = 0;

    while(a<m && b<n){
        if(nums1[a]<=nums2[b])
            nums[c++] = nums1[a++];
        else
            nums[c++] = nums2[b++];
    }
    while(a<m){
        nums[c++] = nums1[a++];
    }
    while(b<n){
        nums[c++] = nums2[b++];
    }
    nums1 = nums;
    }
};