class Solution {
public:
    int reverseDegree(string s) {
        int size= s.length();
        int prod = 0;
        for(int i=0; i<size; i++)
        {
            prod = prod + ((int)('z' - s[i]) + 1)*(i+1);

        }
        return prod;
    }
};
