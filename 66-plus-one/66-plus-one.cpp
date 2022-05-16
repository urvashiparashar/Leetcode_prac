class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        //taking the digits from back so to calculate the carry
        for(int i=digits.size()-1;i>=0;i--)
        {
            int sum=digits[i]+carry; //coz we have to do plus one ans we took carry as 1 earlier ans we will ad the carry to every digit
            digits[i]=sum%10 ;//we will get the last digit
            carry=sum/10 ; //to get the carry
        }
        if(carry>0) //if the carry  to first  digit is greater then zero then insert the value in digits
            digits.insert(digits.begin(),carry); //inserting carry after the beginning element
        return digits; //return the vector as we want in ans
        
        
        
    }
};