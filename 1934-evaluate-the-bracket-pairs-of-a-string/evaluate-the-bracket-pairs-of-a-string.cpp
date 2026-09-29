class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> cister;
        int l = s.length();
        bool brac = 0;
        string res;

        int size = knowledge.size();
        for(int i=0; i<size; i++)
        {
            cister[knowledge[i][0]] = knowledge[i][1];
        }
        string temp;
        for(int i=0; i<l; i++)
        {
            if(s[i] == '(')
            {
                brac =1;
            }
            else if(s[i] == ')')
            {
                if(cister.contains(temp)) res += cister[temp];
                else res += '?';
                brac =0;
                temp ="";
            }
            else if(!brac)  res += s[i];
            else    temp += s[i];
        }
        return res;
    }
};