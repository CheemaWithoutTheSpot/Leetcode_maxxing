class Solution {
public:
    int calculate(string s) {
        int slen = s.length();

        vector<int> stk;

        int result = 0;
        int sign = 1;
        long long num = 0;

        for (int i = 0; i < slen; i++)
        {
            char c = s[i];

            if (c >= '0' && c <= '9')
            {
                num = num * 10 + (c - '0');
            }
            else if (c == '+' || c == '-')
            {
                result += sign * num;
                num = 0;
                sign = (c == '+') ? 1 : -1;
            }
            else if (c == '(')
            {
                stk.push_back(result);
                stk.push_back(sign);
                result = 0;
                sign = 1;
            }
            else if (c == ')')
            {
                result += sign * num;
                num = 0;

                int prevSign = stk.back();
                stk.pop_back();
                int prevResult = stk.back();
                stk.pop_back();

                result = prevResult + prevSign * result;
            }
        
        }

        result += sign * num;
        return result;
    }
};
