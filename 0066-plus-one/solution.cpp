class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        vector<int> res(size,0);
        digits[size-1]++;
        for(int i=size-1; i>0; i--)
        {
            if(digits[i] == 10)
            {
                digits[i] =0;
                digits[i-1]++;

            }
        }
        bool yes=0;
        if(digits[0] ==10)
        {res.resize(size+1, 0); digits[0] =0; res[0] = 1; yes=1;}

        for(int i=0; i<size+yes; i++)
        {
            if(i==0 && res[i] == 1) continue;

            res[i] = digits[i-yes];
        }
        return res;

        
    
    }
    
};
