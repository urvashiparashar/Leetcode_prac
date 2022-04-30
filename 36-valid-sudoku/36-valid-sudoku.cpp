class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        //making three vectors for checking row,col,sub-boxes
        unordered_map<char,bool>row,col,subbox;
        //char for input values:key
        //bool for giving the values for keys(0/1:f/t)
        
        //as we know sudoku contains 3x3 grid
        int i,j;
        for(i=0;i<9;i++)
        {
            for(j=0;j<9;j++)
                //for traversing every row and col
            {
                char r=board[i][j]; 
                char c=board[j][i]; //to check for both rowwise and colwise
                
                if(r!='.' &&(r<'1' || r>'9'))
                    return false; //values alwys between 1 and 9
                
                //checking for row
                if(r!='.')
                {
                    if(row[r]) //if the value given is true:1 i.e ele appears twice
                        return false;
                    row[r]=true;
                }
                
                //checking for col
                if(c!='.')
                {
                    if(col[c])
                        return false;
                     col[c]=true;
                }
                
                //for subboxes: we will get the subbox where r and c are 
                int a=(j/3)+(i/3)*3;
                int b=(j%3)+(i%3)*3;
                c=board[a][b]; //c is updated
                
                if(c!='.')
                {
                    if(subbox[c])
                        return false;
                    subbox[c]=true;
                }
                
                
                
            }
            
            row.clear(); //clear func clears every vector after jth loop
            col.clear();
            subbox.clear();
        }
        //if above is false
        
        return true;
        
        
        
    }
};