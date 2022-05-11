class Solution {
public:
    double myPow(double x, int n) {
        //for pos power
        if(n>=0)
            return pos(x,n);
        //for neg power
        else
            return neg(x,n);
        
    }
    double pos(double x,int n)
    {
        if(n==0) //as we know any 0 
            return 1;
        double res=pos(x,n/2); //dividing power by 2 always
        if(n%2==0)
        {
            return res*res; //if p:4 then square of res..if 2 then power square of number
        }
        else
        {
            return x*res*res; //odd power
        }
    }
    double neg(double x,int n)
    {
        if(n==0) //as we know any 0 
            return 1;
        double res=neg(x,n/2); //dividing power by 2 always
        if(n%2==0)
        {
            return res*res; //value will be returned by n==0 declared prevousily.
        }
        else
        {
            return (1/x)*res*res; //odd power
        }
    }
    
};