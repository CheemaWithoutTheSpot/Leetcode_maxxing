class Solution {
public:

    bool isHappy(int n) {
        unordered_set<int> Hash;
        int c=n;
        int i=0;
        int p=0;
        while(!Hash.count(c))
        {
            i=0;
            Hash.insert(c);

            while(c>0)
            {
                p = c%10;
                i = i+ (p*p);
                c= c/10;
            } 
            c=i;

        }

        if(i==1) return 1;
        return 0;
        
    }
};
