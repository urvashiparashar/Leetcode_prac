class Solution {
public:
    bool ispalindrome(string s,int i,int j)
    {
        while(i<=j)
        {
            if(s[i]==s[j])
            {   i++;
                j--; 
            }
            else
            {
                return false;
            }
            
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0,j=s.size()-1; 
        //checking for palindrome of string
        while(i<j){
            if(s[i]==s[j])
            {
                //compairng first and last ele
                //is the char at these places are same then i and j will be incremented and decremented resp
                i++;
                j--;
            }
            else
            {
                //increment i and compare with j and vice versa
                return ispalindrome(s,i+1,j)||ispalindrome(s,i,j-1); //if the function returns true
                
            }
        }
        return true;
        
    }
};