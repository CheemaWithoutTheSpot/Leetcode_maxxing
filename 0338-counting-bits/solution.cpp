class Solution {
public:
    vector<int> countBits(int n) {
        int offset = 1;
        vector<int> ans(n+1);
        ans[0] = 0;
        for(int i=1; i<n+1; i++)
        {
            if(i == 2*offset)
            {offset = i;}
            ans[i] = 1+ ans[i - offset];
        }    
        return ans; 
    }
};
