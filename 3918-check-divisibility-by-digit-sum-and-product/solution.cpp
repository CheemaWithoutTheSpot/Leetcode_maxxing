class Solution {
public:
    bool checkDivisibility(int n) {
        int sum =0;
        int mult = 1;
        int oh = n;
        while(n>0)
        {
            int dig = n%10;
            sum = sum + dig;
            mult = mult*dig;
            n/=10;
        }
        return ((oh%(sum+mult)) == 0);
    }
};
