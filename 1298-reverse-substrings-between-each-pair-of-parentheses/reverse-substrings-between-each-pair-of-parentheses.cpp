class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> nih;
        string res;
        int l = s.length();
        queue<char> t;
        for(int i=0; i<l; i++)
        {
           
            if(s[i] == ')')
            {
                while(nih.top() != '(') 
                {
                    t.push(nih.top());
                    nih.pop();
                }
                nih.pop();
                while(!t.empty())
                {
                    nih.push(t.front());
                    t.pop();
                }

            }
            else 
            {
                 nih.push(s[i]);
            }
            
        }
        while(!nih.empty())
        {
            res += nih.top();
            nih.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};