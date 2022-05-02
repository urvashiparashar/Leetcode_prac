class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        //gas stations are in circle
        int cg=0,tg=0,s=0;
        int i;
        for(i=0;i<gas.size();i++)
        {
            cg+=(gas[i]-cost[i]);
            tg+=(gas[i]-cost[i]);
            
            if(cg<0)//cg is negative: cannot be the fact
            {  //start at next stn
                s=i+1;
                cg=0; //make cg as 0 for empty tank
            }
            
        }
        if(tg>=0 && s<gas.size())
        {
            return s; 
        }
        return -1;
        
        
    }
};