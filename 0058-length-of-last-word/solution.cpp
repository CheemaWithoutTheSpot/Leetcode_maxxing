class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = s.length();
        int cnt =0;
        int i=size-1;
        while(i>=0)
        {
            if(i==size-1) {while(s[i] == ' ') i--;}
            if(s[i] != ' '){cnt++; i--;}
            else break;
        }
        return cnt;
    }
};
