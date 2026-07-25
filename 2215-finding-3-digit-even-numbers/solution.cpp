class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        unordered_map<int, int> h;
        vector<int> oh;
        int size = digits.size();
        for(int i=0; i<size; i++)
        {
            h[digits[i]]++;
        }

        for(int i=100; i<1000; i += 2)
        {
            bool hehe=0;
            int n=i;
            unordered_map<int, int> j=h;
            while(n>0)
            {
                int digit = n%10;
                if(j[digit]) j[digit]--;
                else break;
                n /= 10;
            }
            if(n<=0) {hehe =1;}
            if(hehe) oh.push_back(i);
        }
        return oh;
    }
};
