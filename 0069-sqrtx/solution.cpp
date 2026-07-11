class Solution {
public:
    int mySqrt(int x) {
        long left = 1, right = x;

        for(; left <= right;)
        {
            long mid = (left+right)/2;
            unsigned long ms =(unsigned long) mid* mid;
            if(ms==x)
                return mid;
            else if(ms<x)
                left = mid+1;
            else 
                right = mid-1;

        }
        return right;
    }
};
