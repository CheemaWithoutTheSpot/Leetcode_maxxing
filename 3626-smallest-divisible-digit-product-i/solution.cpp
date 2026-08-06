class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n; i<n+11; i++)
        {
            int c=i;
            int prod =1;
            while(c>=1)
            {
                prod = prod*(c%10);
                c /= 10;
            }
            if(prod%t == 0) return i;

        }
        return 0;
    }
};
