class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int size = nums.size();
        int cnt =0;
        for(int i=0; i<size; i++)
        {
            int n = nums[i];
            int count=0;

            while(n>0)
            {
                count++; 
                n=n/10;
            }
            if(count%2 == 0) cnt++;
        }
        return cnt;
    }
};
