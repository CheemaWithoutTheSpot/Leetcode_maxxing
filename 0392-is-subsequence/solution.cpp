class Solution {
public:
    bool isSubsequence(string s, string t) {
        int pos = 0;
        int l = t.length();
        int sl = s.length();
        for(int i=0; i<l; i++)
        {
            if(pos>=sl) break;
            if(s[pos] == t[i])
            {
                pos++;
            }
        }
        if(pos  == sl ) return 1;
        return 0;
    }
};
