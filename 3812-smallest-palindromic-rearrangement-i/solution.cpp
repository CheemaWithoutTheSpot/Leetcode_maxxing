#include<execution>
class Solution {
public:
    string smallestPalindrome(string s) {
        int size = s.length();
        if(size ==1) return s;
        string str = s.substr(0, size/2);
        sort(execution::par, str.begin(), str.end());
        string cpy = str ;
        if(size%2) str += s[size/2];

        reverse(cpy.begin(), cpy.end());
        str += cpy;
        return str;
    }
};
