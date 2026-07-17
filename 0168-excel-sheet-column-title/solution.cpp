class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res;
        string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        while(columnNumber > 0)
        {
            columnNumber--; 

            res += a[columnNumber % 26];
            columnNumber= columnNumber / 26;

        }
        reverse(res.begin(), res.end());
        return res;
    }
};
