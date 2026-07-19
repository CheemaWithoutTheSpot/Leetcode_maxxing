class Solution {
public:
    string toHex(int num) {
        if(num == 0) return "0";
        string arr = "0123456789abcdef";
        string res;
        long two_thirty_two = 4294967296;

        bool neg = num<0;

        long n = (neg)? two_thirty_two+num: num;

        while(n>0)
        {
            res += arr[n%16];
            n = n/16;
        }
        reverse(res.begin(), res.end());
        return res;
        
    }
};
