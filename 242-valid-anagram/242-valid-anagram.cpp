class Solution {
public:
    bool isAnagram(string s, string t) {
        
        //strings can only be anagrams if length is equal
        if(s.length()!=t.length())
            return false;
        //take array and intialize with 0 for 26 lowercase alphabets as given in contraints
        int freq[26]={0};
        
        //for string s
        
        for(int i=0;i<s.length();i++)
        {
            int idx=s[i]-'a'; //to calculate the array index in order to increase the freq
            freq[idx]++ ;//increase the value of freq array
        }
        
         //for string t
        
        for(int i=0;i<t.length();i++)
        {
            int idx=t[i]-'a'; //to calculate the array index in order to increase the freq
            freq[idx]-- ;//decrease the value of freq array so to get that same times same letters are repeated
        }
        
        //traversing the freq array to see if any value is equal to 0 or not
        for(int i=0;i<26;i++)
        {
            if(freq[i]!=0) //values greater than 0
                return false; 
        }
        
        return true; //all condn are true: length equal and freq==0
        
    }
};