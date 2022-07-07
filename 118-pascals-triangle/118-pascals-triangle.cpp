class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        //taking the results of each row of vector rows
    vector<vector<int>>res(numRows); //passing the value of n
    for(int i=0;i<numRows;i++)
    {
        //taking the row now and defining its size
        res[i].resize(i+1); //as we are starting from 0 so we are defining each row size as i+1
        res[i][0]=res[i][i]=1; //taking the col number as 0 and 1
        
        for(int j=1;j<i;j++)
        {
            //for 2nd row we get 1>1 that is false so we have only 2 eles as 1 1.
            res[i][j]=res[i-1][j-1]+res[i-1][j];
        }
        
    }
     return res;   
    }
};