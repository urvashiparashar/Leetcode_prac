class Solution {
public:
    string reverseWords(string s) {
        
        
        //using two pointer approach: l and r
        int l=0,r=-1; //assigning dummy values to r 
        //traversing whole string
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ' || i==s.length()-1) //if reaches the space or last char of string
            {
                if(i==s.length()-1)
                {
                    r=i;  //take the r from last char to reverse letters of last word
                }
                else
                {
                    r=i-1; //if encountered space then take the char at  index i-1
                }
                //swap characters
                while(l<=r)
                {
                    swap(s[l++],s[r--]);
                }
                l=i+1;
            }
            
        }
        return s;
    }
};