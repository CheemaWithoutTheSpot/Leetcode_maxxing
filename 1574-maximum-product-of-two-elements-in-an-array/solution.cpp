class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int big =0;
        int finj =0;
        int big1 = 0;
        int size = nums.size();
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<size; j++)
            {
                if(i==0)
                {
                    if(big<nums[j]) {big = nums[j]; finj = j;}
                    
                }
                else 
                {
                    if(big1 < nums[j] && nums[j] <= big) big1 = nums[j];
                }
            }
            nums[finj] = 0;
        }
        return ((big-1) * ((big1)-1));
    }
};
