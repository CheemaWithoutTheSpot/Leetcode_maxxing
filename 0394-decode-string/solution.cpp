class Solution {
public:
    
    string decodeString(string s) {
        stack<int> cStk;
        stack<string> sStk;
        string curr= "";
        int num = 0;

        for (char c : s) {
            if (isdigit(c)) {
                num = num * 10 + (c - '0');
            }
            else if (c == '[') {
                cStk.push(num);
                sStk.push(curr);
                num = 0;
                curr = "";
            }
            else if (c == ']') {
                int repeatCount = cStk.top();
                cStk.pop();
                string prev = sStk.top();
                sStk.pop();

                string repeated = "";
                for (int i = 0; i < repeatCount; i++) {
                    repeated += curr;
                }
                curr = prev + repeated;
            }
            else {
                curr += c;
            }
        }

        return curr;
    }
};
