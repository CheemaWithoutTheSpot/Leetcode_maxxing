class Solution {
public:
    int smallestIndex(vector<int>& nums) {

        int size = nums.size();
        for(int i=0; i<size; i++)
        {   int num=0;
            while(nums[i] != 0)
            {
                num += nums[i] %10;
                nums[i] /= 10;
            }
            if(num == i)    return i;
        }
        return -1;
    }
};
