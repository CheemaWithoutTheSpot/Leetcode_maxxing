class Solution {
public:
    int minOperations(vector<int>& nums, int x) {

        int n = nums.size();
        vector<int> p(n+1);
        vector<int> s(n+1);
        p[0]=0;
        s[0]=0;

        for (int i=1; i<=n; i++) p[i] = p[i-1] + nums[i-1];
        for (int j=1; j<=n; j++) s[j] = s[j-1] + nums[n-j];

        int ans=-1;
        int j=n; 

        for (int i=0; i<=n; i++) 
        {
            while (j>0 && (p[i]+s[j] > x || i+j > n)) j--;

            if (i+j <= n && p[i]+s[j] == x) ans = (ans == -1) ? (i+j) : min(ans, i+j);
        }
        return ans;
    }
    
};
