class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum1 = 0;
        int sum10 =0;
        int size = nums.size();
        for(int i=0; i<size; i++)
        {
            if(nums[i]%10 == nums[i]) sum1 += nums[i];
            else sum10 += nums[i];
        }
        return sum1!=sum10;
    }
};
