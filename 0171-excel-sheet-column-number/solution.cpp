class Solution {
public:
    int titleToNumber(string columnTitle) {
        int size = columnTitle.length();
        long long pow = 1;
        int res =0;
        for(int i=size-1; i >=0; i--)
        {
            res = res + pow*(columnTitle[i] - '@');
            pow = pow*26;

        }
        return res;
    }
};
