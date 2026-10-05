class Solution {
public:
    int scoreOfParentheses(string s) {
        int len = s.length();
        int size = 0;
        int res =0;

        for(int i=0; i<len; i++)
        {
            if (s[i] == '(') size++;
            else 
            {
                size--;
                if (s[i-1] == '(') 
                {   
                    res += 1 << size;  
                }
            }
            
        }
        return res;
    }
};