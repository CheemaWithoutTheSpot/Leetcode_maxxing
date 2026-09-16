class Solution {
public:
int firstUniqChar(string s) {
    int f[26] = {0};
    
    for (char c : s) {
        f[c - 'a']++;
    }
    int size  =  s.length();
    for (int i = 0; i <size; i++) {
        if (f[s[i] - 'a'] == 1) {
            return i;
        }
    }
    
    return -1;
}
};
