class Solution {
public:

    double func(double x, long n)
    {
        if(x==0) return 0;
        if(n==0) return 1; 

        double ress= func(x, n/2);
        ress = ress*ress;
        if(n%2) return x*ress;

        return ress;
    }
    double myPow(double x, int n)  
    {
        double res;

        res = func(x, (long)abs((long long)n));
        if(n<0) return 1/res;
        return res;
        
    }
};
