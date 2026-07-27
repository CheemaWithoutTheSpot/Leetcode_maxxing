class Solution {
public:
    string convert(string s, int numRows) {
        int length= s.length();
        int hehe = 2*(numRows-1);
        if(numRows == 1) return s;
        string res;
        for(int j=0; j<numRows; j++) {
            for(int i=j; i<length; i=i+hehe)
            {
                res+= s[i];
                if(j!=0 && j!= numRows-1)
                {
                    int diag = i + hehe - 2 * j;
                    if (diag < length) res += s[diag];
                }

            }
        }
        return res;
    }
};
