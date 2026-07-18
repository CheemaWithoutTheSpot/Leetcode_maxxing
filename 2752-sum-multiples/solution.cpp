class Solution {
public:
    int S(int n, int d)
    {
        int k = n/d;
        return d*((k * (k+1)) / 2);
    }
    int sumOfMultiples(int n) {
        return S(n,3) + S(n,5) + S(n,7) -S(n,15) -S(n, 21) -S(n, 35) + S(n, 105);
    }
};
