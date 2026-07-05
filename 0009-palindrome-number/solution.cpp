class Solution {
public:

    int count_digits(int n) {
        if (n < 0) n = -n; 
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

    int reverse(int n) {
        int reversed_num = 0; 
        while(n != 0) {
            int remainder = n % 10;
            reversed_num = reversed_num * 10 + remainder;
            n /= 10;
        }
        return reversed_num;
    }
    int power(int n, int e)
    {
        int p = 1;
        while (e > 0)
        {
            p = p * n;
            e--;
        }
        return p;
    }

    bool isPalindrome(int x) {
        if(x==0) return 1;
        if(x<0) return 0;
        int num = count_digits(x);
        bool yes=0; 
        int a =0, b=0;
        int ten = power(10, num/2);
        
        if(num%2==1)
            yes=1;
        a = (yes)? x/(ten*10) : x/ten;
        b= x%ten;

        while(a>0 && a%10 == 0)
        {
            a=a/10;
        }

        return a==reverse(b);

        
    }
};
