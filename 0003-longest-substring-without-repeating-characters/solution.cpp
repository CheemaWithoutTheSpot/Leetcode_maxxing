class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int j=0;
        int big=0;
        int size = s.length();

        for(;i<size;)
        {   long count=0;
            bool a[256] = {0};

            for(j=i;j<i+100 && j<size;j++)
            {
                unsigned char c = s[j];
                if(a[c]) break;
                count++;

                a[c] = 1;
            }
            big = (count>big)? count: big;
            i++;
            
        }
        return big;
        
    }
};
