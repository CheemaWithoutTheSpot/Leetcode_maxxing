#include<string_view>
class Solution {
public:

    int cnt(uint32_t n) {
        if (n < 10) return 1;
        if (n < 100) return 2;
        if (n < 1000) return 3;
        if (n < 10000) return 4;
        if (n < 100000) return 5;
        if (n < 1000000) return 6;
        if (n < 10000000) return 7;
        if (n < 100000000) return 8;
        if (n < 1000000000) return 9;
        return 10;
    }


    int aot(string_view str) {
        int val = 0;
        size_t i = 0;
        


        while (i < str.size() && str[i] >= '0' && str[i] <= '9') {
            val = val * 10 + (str[i] - '0');
            ++i;
        }

        return val;
    }
    vector<int> sequentialDigits(int low, int high) {
        int l_cnt = cnt(low);
        int h_cnt = cnt(high);
        vector<int> ans;
        string s = "123456789";

        int num =0;

        while(l_cnt<=h_cnt)
        {
            for (int i = 0; i + l_cnt <= 9; i++) {
                int num = aot(s.substr(i, l_cnt));
                if (num < low) continue;
                if (num > high) break;
                ans.push_back(num);
            }
            l_cnt++;
        }
        return ans;
        
    }
};
