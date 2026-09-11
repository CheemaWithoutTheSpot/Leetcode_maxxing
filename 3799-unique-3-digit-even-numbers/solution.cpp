class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int cnt[10] = {0};
        for (int d : digits) cnt[d]++;

        int count = 0;
        for (int a=1; a<=9; a++) {           
            for (int b=0; b<=9; b++) {        
                for (int c=0; c<=8; c+= 2) 
                {  

                    int A=1;
                    int B = 1+(b == a);
                    int C = 1+(c == a)+(c == b);

                    if (cnt[a] >= A && cnt[b] >= B && cnt[c] >= C) count++;
                
                }
            }
        }
        return count;
    }
};
