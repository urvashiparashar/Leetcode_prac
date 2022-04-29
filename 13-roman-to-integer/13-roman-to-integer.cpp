class Solution {
public:
    int romanToInt(string str) {
        
//         //first approach:using switch
//         int l=str.length();
//         int total=0,f,s;
//         int i;
//         for(i=0;i<l;i++)
//         {
//             f=returnfunc(str[i]); //s[i] gives char of string
//             s=returnfunc(str[i+1]);
//             //comparing the two consecutive ele
//             if(f<s) //as in case of 9:IX
//             {
//                 total-=f; //subtrcat from the next int
//             }
//             else
//             {
//                 total+=f;
//             }
//         }
//         return total;
        
//     }
    
//     int returnfunc(char i)
//     {
//         switch(i) //to check corresponding ele
//         {
//             case 'I':
//                 return 1;
//             case 'V':
//                 return 5;
//             case 'X':
//                 return 10;
//             case 'L':
//                 return 50;
//             case 'C':
//                 return 100;
//             case 'D':
//                 return 500;
//             case 'M':
//                 return 1000;
//             default:
//                 return 0;
           
            
//         }
        
        //Approach 2: Using maps
        //map of char and values
        unordered_map<char,int>m=
        {
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };
        
        int len=str.length();
        int sum=0;
        for(int i=0;i<len-1;i++) //run till idx-1 ele
        {
            int currval=m[str[i]];
            if(currval<m[str[i+1]])
                currval=-1*currval; //if prev is smaller then next so take  negative value
            sum+=currval;
        }
        //for last ele
        sum+=m[str[len-1]];
        return sum;
        
        
        
        
   }
};