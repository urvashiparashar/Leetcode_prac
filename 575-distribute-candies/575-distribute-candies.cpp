class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int>map;
        //taking unordered map so that we can increment the key and theor values
        int res;
        for(int i=0;i<candyType.size();i++)
        {
            int key=candyType[i];
            map[key]++; //here map keys are having the freq of ele of array
            
        }
        if(map.size()==1)
        {
            //one ele only
            res=1;
            
        }
        else
        {
            if(candyType.size()/2 >map.size())
            {
                //if greater size of map
                res=map.size(); 
            }
            else
            {
                res=candyType.size()/2; //as advised by doctor
            }
        }
        return res;
        
    }
};