class Solution {
public:

    long long C(int n, int k) {
        if (k > n) return 0;
        if (k == 0 || k == n) return 1;
        if (k > n / 2) k = n - k; // Symmetry property
        
        long long result = 1;
        for (int i = 1; i <= k; ++i) {
            result = result * (n - i + 1) / i;
        }
        return result;
    }
    vector<int> getRow(int rowIndex) {
        vector<int> r(rowIndex+1);
        r[0] = 1; 
        r[rowIndex] = 1;
        for(int i=1; i<rowIndex; i++)
        {
            r[i] = C(rowIndex, i);
        }
        return r;
    }
};
