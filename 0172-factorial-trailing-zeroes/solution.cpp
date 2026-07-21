class Solution {
public:
    int trailingZeroes(int n) {
        int cnt =0; 
        int five = 5;
        while(n>=five)
        {
            cnt = cnt + n/five;
            five = five* 5;
        }
        return cnt;
        
    }
};
