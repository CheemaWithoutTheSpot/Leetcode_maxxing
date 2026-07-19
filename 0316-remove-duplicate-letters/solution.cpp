class Solution {
public:
    string removeDuplicateLetters(string s) {
        int idx[26] = {0};
        bool seen[26] = {0};
        string ans;
        int length = s.length();
        for(int i=0; i< length; i++)
        {
            idx[s[i] - 'a'] = i;
        }
        for(int i=0; i<length; i++)
        {
            char c = s[i];
            if(seen[c - 'a']) continue;

            while(ans.length() > 0 && ans.back() > c && idx[ans.back() - 'a'] > i)
            {
                seen[ans.back() - 'a'] = 0;
                ans.pop_back();
            }
            ans.push_back(c);
            seen[c-'a'] = 1;


        }
        return ans;
    }
};
