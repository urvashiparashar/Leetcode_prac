class Solution {
public:
    int maxDepth(string s) {
        int maxi=0,cnt=0;
        stack<char>vps;
        //taking stack and pushing the opening brackets
        for(int i=0;i<s.length();i++)
        {
            
             
            if(s[i]=='(') //when and opening bracket
            {
                //push in stack
                vps.push(s[i]);
            }
            else 
            {
                if(s[i]==')') //when closing bracket is found compare with max and pop the corressponding opening bracket
                    
                {
                    maxi=max(maxi,(int)vps.size()); //.size() is of size_t so explicit casting is a must
                    vps.pop();
                }
            }
        }
        return maxi; //return max count as max value will be get stored earlier as opening brackets get encountered with closing pop from stack
        
    }
};