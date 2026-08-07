class Solution {
public:
    int strStr(string haystack, string needle) {
        int len = haystack.length();
        int size= needle.length();
        for (int i=0; i<= len-size; i++) {
            int j=0;
            while (j<size && haystack[i + j] == needle[j]) {
                j++;
            }
            if (j==size) return i;
        }
        return -1;
    }
};
