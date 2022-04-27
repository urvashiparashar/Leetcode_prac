class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int res=0, curr=0,n=s.size(),arr[256]={0}; //for spaces and characters
        for(int i=0;i<n;i++){
        while(arr[s[i]]!=0) //for converting the char to numerical value
        {
            arr[s[i-curr]]--; //for i is visited and curr is 
            curr--;
        }
        if(arr[s[i]]==0)
        {
            arr[s[i]]=1; //assign one to visited
            curr++; //pointing to current value
        }
            res=max(res,curr);
        }
        return res;
        
    }
};