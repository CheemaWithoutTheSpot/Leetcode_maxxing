class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";

        string prefix= strs[0];
        int size = strs.size();
        for(int i= 1; i<size; i++) {
            int j= 0;
            int pl = prefix.length();
            int sl = strs[i].length() ;
            while (j< pl && j< sl && prefix[j] == strs[i][j]) {
                j++;
            }
            prefix = prefix.substr(0, j);
            if(prefix.empty()) return "";
        }
        return prefix;
    }
};
