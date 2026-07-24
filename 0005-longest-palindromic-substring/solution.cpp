class Solution {
public:
    string longestPalindrome(string s) {
        string res;
        int rlen =0;
        int slen =s.length();
        if(slen ==2)
        {
            if(s[0] == s[1]) return s;
            else 
            {string h;
            h += s[0];
            return h;}
        }
        for(int i=0; i<slen; i++)
        {
            for(int j=0; j<=1; j++)
            {
                int l=i, r=i;
                if(j) r=i+1;
                while(l>=0 && r<slen && s[l] == s[r])
                {
                    if(r-l+1 > rlen)
                    {
                        res = s.substr(l, r-l+1);
                        rlen = r-l+1;
                    }
                    l= l-1;
                    r=r+1;
                }
            }
        }
        return res;

    }
};
