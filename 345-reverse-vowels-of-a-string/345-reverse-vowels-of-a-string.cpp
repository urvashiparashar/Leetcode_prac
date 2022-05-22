class Solution {
public:
    bool isvowel(char c)
    {
        //char to know if chara is vowel or not
        if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
        {
            return true;
        }
        //no vowel
        return false;
            
    }
    string reverseVowels(string s) {
        
       if(s.length()<=1)
           return s; //length of string smaller than 1 or equal to 1
        int l=0,r=s.length()-1; //2 pointers approach
        while(l<r)
        {
            bool lvf=false,rvf=false; //determining if vowels from l to r
            if(isvowel(s[l]))
                lvf=true;
            if(isvowel(s[r]))
                rvf=true;
            //if both lvf and rvf are true then only swap
            if(lvf && rvf)//true cond both
            {
                swap(s[l++],s[r--]);
            }
            if(!lvf) //lvf is false
                l++;
            if(!rvf) //rvf is false
                r--;
                
        }
        
        return s;
        
    }
};