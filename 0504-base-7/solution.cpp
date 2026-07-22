class Solution {
public:
    string convertToBase7(int num) {
        string ans ;
        bool h=0;
        if (num== 0) return "0";
        if(num<0) {h=1; num = -num; }
        while(num>0)
        {
            ans += to_string(num%7);
            num=num/7;
        }
        if(h){ans += '-';}
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
