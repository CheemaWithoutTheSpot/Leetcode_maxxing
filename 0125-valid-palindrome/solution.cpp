class Solution {
public:
    bool isPalindrome(string s) {
        string meow; 
        int size = s.length();
        for(int i=0; i<size; i++)
        {
            if ((s[i] >= 'a' && s[i] <='z') || (s[i] >= '0' && s[i] <= '9'))
            {
                meow.push_back(s[i]);
            }
            else if (s[i] >= 'A' && s[i] <='Z')
            {
                meow.push_back((char) (s[i] + 32));
            }
            
        }
        int len = meow.length();
        for(int i=0; i<len/2; i++)
        {
            if(meow[i] != meow[len-1-i]) return false;
        }
        return true;
    }
};
