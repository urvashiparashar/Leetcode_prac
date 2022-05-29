class Solution {
public:
    int maxDepth(string s) {
        int maxi=0,cnt=0;
        stack<char>vps;
        
        for(int i=0;i<s.length();i++)
        {
            
             
            if(s[i]=='(') //when and opening bracket
            {
                //push in stack
                vps.push(s[i]);
                maxi=maxi>vps.size()?maxi:vps.size();
            }
            else 
            {
                if(s[i]==')') //when closing bracket is found compare with max and pop the corressponding opening bracket
                    
                {
                    
                    vps.pop();
                }
            }
        }
        return maxi; //return max count as max value will be get stored earlier as opening brackets get encountered with closing pop from stack
        
    }
};