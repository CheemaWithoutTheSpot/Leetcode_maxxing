class Solution {
public:
    int countDigitOne(int n) {
        long long tens=1;
        vector<long long> pref;
        pref.push_back(0);
        long long max=0;
        while(tens<n)
        {
            max = max*10 + tens;
            pref.push_back(max);
            
            tens = tens*10;
        }

        int i = pref.size() - 1;

        while (tens > n) {
            tens /= 10;
            i--;
        }
        long long count = 0;
        long long num = n;
        while (num > 0) {

            long long p = tens; 
            int dig = (num / p) % 10;
            long long rest = num % p;

            count += (long long)dig * pref[i];

            if (dig == 1) count += rest + 1;
            else if (dig > 1) count += p;
            num = rest;
            tens /= 10;
            i--;
        }
        return (int)count;


    }
};
