class Solution {
public:
    bool checkString(string s) {
        bool wow =0;
        int size = s.length();
        for(int i=0; i<size; i++)
        {
            if(wow && s[i] == 'a') return 0;
            if(s[i] == 'b' && !wow) wow = 1;
        }
        return 1;
    }
};