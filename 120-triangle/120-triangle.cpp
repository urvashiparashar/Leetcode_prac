class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        //2d arrays 
        for(int i=triangle.size()-2;i>=0;i--) //as it is said that we can take i or i+1
        {
            for(int j=0;j<=i;j++)
            {
                //to compare the ele of triangle
                triangle[i][j]+=min(triangle[i+1][j],triangle[i+1][j+1]);
            }
        }
        return triangle[0][0];
    }
};