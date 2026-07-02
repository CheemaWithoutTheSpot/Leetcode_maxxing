class Solution {
public:
    int idx(char a)
    {
        if(a=='I') return 0;
        if(a=='V') return 1;
        if(a=='X') return 2;
        if(a=='L') return 3;
        if(a=='C') return 4;
        if(a=='D') return 5;
        if(a=='M') return 6;

        return 7;
    }

    int romanToInt(string s) {
        int sum=0;
        int n[] = {1, 5, 10, 50,100, 500, 1000};
        bool final=0;
        char c[] = {'I', 'V', 'X', 'L', 'C' ,'D', 'M'};
        for(int i=0; i<s.length()-1; i++)
        {
            for(int j=0; j<7; j++)
            {
                if(c[j] == s[i])
                {
                    if(j==0 || j==2 || j==4)
                    {
                        if(s[i+1] == c[j+1] || s[i+1] == c[j+2])
                        {
                            sum = sum + (n[idx(s[i+1])] -  n[idx(s[i])]);
                        final = (i + 1 == (int)s.length() - 1); 
                        i++; 
                        break;
                        }
                        
                    }
                    sum = sum + n[idx(s[i])];
                    final = 0;
                    break;

                }
            }
        }
        if(!final)
        {
            sum = sum + n[idx(s[s.length() -1])];
        }
        return sum;
        
    }
};
