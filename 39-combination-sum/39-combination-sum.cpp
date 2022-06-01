class Solution {
public:
    void check(vector<int> &candidates,int target,int curr,vector<vector<int>> &result,vector<int> &combi)
    {
        if(curr==candidates.size())
        {
            if(target==0)
            {
                result.push_back(combi);
            }
            return ;
        }
        if(candidates[curr]<=target)
        {
            combi.push_back(candidates[curr]); //pushing each ele and checking whether that ele satisfies the constraints or not
            check(candidates,target-candidates[curr],curr,result,combi); //recursion
            combi.pop_back(); //back track:clear each time vector
        }
        check(candidates,target,curr+1,result,combi); //incrementing the index to take ele
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int curr=0;
        vector<vector<int>> result;
        vector<int> combi;
        check(candidates,target,curr,result,combi);
        return result;
    }
};