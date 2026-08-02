class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> hehe; 

        int t = 1<<n;
        
        for(int i=0; i<t; i++)
        {
            int num=i;
            vector<bool> bin(n, 0);
            int j=n-1;
            while(num>0)
            {
                bin[j] = num%2;
                num=num/2;
                j--;
            }
            
            for (j = n - 1; j >= 1; j--) {
                bin[j] = bin[j-1] ^ bin[j];
            }

            int val = 0;
            for (j = 0; j<n; j++) {
                val = val*2 + bin[j];
            }
            hehe.push_back(val); 

        }
        return hehe;
    }
};
