class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        //sort vector from begin to end
        int as=0,bs=0; //initiliazing scores as 0
        for(int i=piles.size()-1;i>=0;i=i-2)
        {
            //for as as it will start from last and i=i-2 for alternate chance
            as+=piles[i];
        }
        for(int i=piles.size()-2;i>=0;i=i-2)
        {
            //bob will start from second last
            bs+=piles[i];
        }
        if(as>bs)
        {
            return true; //alice won
        }
        
        
        return false;
        
        
    }
};