class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum =0; 
        long long ten =1;
        long long num=0;
        int dig=0;
        while(n>0)
        {
            dig = (n%10);
            sum = sum + dig;
            if(dig != 0)
            {
                num = num + ten*dig;
                ten = ten*10;

            }
            n = n/10;
        }
        return num * sum;
    }
};
