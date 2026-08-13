class Solution {
public:
    void func(vector<string>& res, string& ans, string& digits, vector<string>& hehe, int idx)
    {
        if(ans.length() == digits.length())
        {
            res.push_back(ans);
            return;
        }
        for(int i=0; i< hehe[(digits[idx]-'0')-2].length(); i++)
        {
            ans.push_back(hehe[(digits[idx]-'0')-2][i]);
            func(res, ans, digits, hehe, idx+1);
            ans.pop_back();
        }

    }
    vector<string> letterCombinations(string digits) {
        
        vector<string> res;
        vector<string> hehe = {"abc" , "def" , "ghi" , "jkl" , "mno" , "pqrs", "tuv" , "wxyz"};
        string ans;
        func(res, ans, digits, hehe, 0);
        return res;
    }
};
