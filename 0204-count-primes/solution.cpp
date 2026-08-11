class Solution {
public:
    int countPrimes(int n) {
    if (n<2) return 0;
    vector<bool> hehe(n, 0);
    int count=0;
    
    for (int i=2; i<n; i++) {
        if (!hehe[i]) 
        {
            count++;


            for (long j = (long)i*i; j<n; j+=i) 
                hehe[j] = 1;
            
        }
    }
    return count;
    }
};
