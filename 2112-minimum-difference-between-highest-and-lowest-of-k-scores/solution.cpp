#include<execution>
class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if(nums.empty())
        {
            return 0;
        }
        int size = nums.size();
        if(nums.size() == 1 || k == 1)
        {
            return 0;
        }
        sort(std::execution::par, nums.begin(), nums.end());
        int big =10000000;
        for(int i=0; i<size-k+1; i++)
        {
            if(i == size-1)
            {
                big = nums[i+k-1] - nums[i];
                continue;
            }
            if(nums[i+k-1] - nums[i] < big)
            {
                big = nums[i+k-1] - nums[i];
            }
        }
        return big;
    }
};
