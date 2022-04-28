class Solution {
public:
    string intToRoman(int num) {
        vector<string>symbols={"I","IV","V","IX","X","XL","L","XC","C","CD","D",
                          "CM","M"};
        vector<int>values={1,4,5,9,10,40,50,90,100,400,500,900,1000};
                           
        int i;
        //take a string  for resultant string and to append characters
        string res; 
        for(i=values.size()-1;i>=0;i--) //piche se start to see if num divisible by value
        {
            int val=values[i];
            string sym=symbols[i];
            if(num/val) //if divisible hota h
            {
                int cnt=num/val; //count to repeat same character
                while(cnt--) 
                    res.append(sym); //append in string
                num=num%val; //takes last digit
            }
        }
        return res;
    }
};