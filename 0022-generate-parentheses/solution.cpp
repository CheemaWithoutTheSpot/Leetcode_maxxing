class Solution {
public:
    void func(vector<string>& res, string& ans, int open, int closed, int n)
    {
        if(open == closed && open == n) 
        {
            res.push_back(ans);
            return;
        }
        if(open<n)
        {
            ans.push_back('(');
            func(res, ans, open+1, closed, n);
            ans.pop_back();
        }
        if(closed<open)
        {
            ans.push_back(')');
            func(res, ans, open, closed+1, n);
            ans.pop_back();

        }

    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string ans;
        func(res, ans, 0, 0, n);
        return res;
    }
};
