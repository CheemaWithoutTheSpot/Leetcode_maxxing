class Solution {
public:
    vector<int> evenOddBit(int n) {
        vector<int> res(2);
        int cnt=0;
        while(n>0)
        {
            if(n%2)
            {
                (cnt%2)? res[1]++: res[0]++;
            }
            n /=2;
            cnt++;
        }
        return res;
    }
};
