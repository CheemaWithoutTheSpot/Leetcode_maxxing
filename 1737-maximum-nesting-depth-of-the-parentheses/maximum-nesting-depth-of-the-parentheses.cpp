class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int maggs =0;
        int c =0;
        int l = s.length();
        for(int i=0; i<l; i++)
        {
            if(s[i] == '(') 
            {
                st.push(s[i]);
                c++;
                maggs = max(maggs, c);
            }
            else if(s[i] == ')')
            {
                st.pop();
                c--;
            }

        }
        return maggs;

    }
};