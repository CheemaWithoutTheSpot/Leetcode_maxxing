class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int min = nums[0] + nums[1] + nums[2];
        int size = nums.size();
        for(int i=0; i< size-2; i++)
        {
            int l=i+1, h= size -1;
            while(l<h)
            {
                int sum = nums[i] +nums[l] +nums[h];
                if(abs(sum-target) < abs(min-target)) min = sum;
                
                if(sum == target) return sum;
                else if(sum < target) l++;
                else h--;
            }
        }
        return min;
    }
};
