class Solution {
public:
    bool digitCount(string num) {
        unordered_map<int,int>m;
        //traversing the string 
        for(int i=0;i<num.size();i++)
        {
            int n=num[i]-'0';
            //increasing frequency of every digit
            m[n]++;
        }
        for(int i=0;i<num.size();i++)
        {
            int n=num[i]-'0';
            if(n!=m[i])
            {
                //comparing the digits with the value of map at index i
                return false;
            }
        }
        return true;
        
    }
};