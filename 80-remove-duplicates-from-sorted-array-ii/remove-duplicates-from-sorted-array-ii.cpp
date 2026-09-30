class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int removed_cnt =0;
        int size = nums.size();
        bool yes = 0;
        for(int i=1; i< size - removed_cnt; i++)
        {
            if(nums[i] == nums[i-1] && yes ==1)
            {
                int j=i;
                while(j+1<size - removed_cnt)
                {
                    nums[j] = nums[j+1];
                    j++;
                }
                removed_cnt++;
                i--;
            }
            else if(nums[i] == nums[i-1])
            {
                yes =1;
            }
            else 
            {
                yes=0;
            }
        }
        return size - removed_cnt;
    }
};