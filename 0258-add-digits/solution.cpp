class Solution {
public:
    int addDigits(int num) {
        if(num ==0) return 0;
        int s = num%9;
        if(s==0){return 9;}
        return s;
    }
};
