class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<std::string> f(n);
        int ctr_3=1;
        int ctr_5=1;
        int ctr_15=1;
        for(int i=1; i<=n; i++)
        {
            if(ctr_15 == 15)
            {
                f[i-1] = "FizzBuzz";
                ctr_15 = 0;
                ctr_3=0; 
                ctr_5=0;
            }
            else if(ctr_3 == 3)
            {
                f[i-1] = "Fizz";
                ctr_3 = 0;
            }
            else if(ctr_5 == 5)
            {
                f[i-1] = "Buzz";
                ctr_5 =0;
            }
            else
            {
                f[i-1] = std::to_string(i);
            }
            ctr_3++;
            ctr_5++;
            ctr_15++;
        }
        return f;
    }
};
