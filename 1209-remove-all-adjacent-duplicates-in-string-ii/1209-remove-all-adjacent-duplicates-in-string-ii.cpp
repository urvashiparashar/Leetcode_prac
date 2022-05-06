class Solution {
public:
    string removeDuplicates(string s, int k) {
        //for storing frequencies
        vector<int>count;
        vector<int>news; //for string new string
        for(int i=0;i<s.length();i++)
        {
            //if vector is empty push it in
            if(news.size()==0)
            {
                count.push_back(1);
                news.push_back(s[i]);
            }
            else if(news.back()==s[i])//repeat h ele
            {
                count.push_back(count.back()+1); //incremenst the values by 1
                news.push_back(s[i]);
            }
            else //diff h char
            {
                count.push_back(1);
                news.push_back(s[i]);
            }
            //if smae char then remove from new string
            if(count.back()==k) //back points to the latest ele places
            {   for(int j=0;j<k;j++)
            {
                count.pop_back();
                news.pop_back(); //remove char that are similar
            }
            }
        }
        string ss;
        for(auto x:news)
        {
            ss+=x;
        }
        return ss;
        
    }
};