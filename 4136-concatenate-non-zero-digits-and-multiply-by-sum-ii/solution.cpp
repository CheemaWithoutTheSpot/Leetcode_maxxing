class Solution {
public:
    const long long MOD = 1000000007;


    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) 
    {
        int n = s.size();
        int q = queries.size();

        vector<long long> pSum(n, 0);
        vector<long long> pNum(n, 0);
        vector<int> pCount(n, 0);
        vector<long long> pPow(n+1,0);
        pPow[0] = 1;
        pCount[0] = (int)(s[0] != '0');
        pNum[0] = s[0] - '0';
        pSum[0] = s[0] - '0';

        for(int i=1; i<n; i++)
        {
            int dig = s[i] - '0';
            
            if(dig != 0)
            {
                pCount[i] = pCount[i-1] +1;
                pNum[i] = ((pNum[i-1] * 10 ) + dig) %MOD;

            }
            else 
            {
                pCount[i] = pCount[i-1];
                pNum[i] = pNum[i-1];

            }

            pSum[i] = (pSum[i-1] + dig); 
            pPow[i] = (pPow[i-1]*10) % MOD;
            
        }
        vector<int> sol(q);
        for(int i=0; i<q; i++)
        {
            int l= queries[i][0];
            int r = queries[i][1];

            int count = pCount[r] - ((l==0)? 0 : pCount[l-1]);

            long long sum = pSum[r] - ((l == 0)? 0 : pSum[l-1]);
            long long num = pNum[r] - ((l== 0)? 0 : (pNum[l-1]*pPow[count]) % MOD);
            num = ((num % MOD) + MOD) % MOD;

            sol[i] = (int)((num*sum) %MOD);

        }
        return sol;
    }
};
