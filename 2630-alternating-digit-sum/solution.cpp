class Solution {
public:
    int alternateDigitSum(int n) {
        int c =0;
        int b=n;
        while(b>0)
        {c++; b=b/10;}
        int num=0;
        int oh = (c%2)? 1 : -1;
        while(n>0)
        {
            num = num + ((n%10)*oh);
            oh = oh*-1;
            n= n/10; 
        }
        return num;
        
    }
};
