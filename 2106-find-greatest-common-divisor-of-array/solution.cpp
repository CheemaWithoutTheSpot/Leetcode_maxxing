class Solution {
public:
    int findGCD(vector<int>& nums) {
        int s = 10001, l=0;
        int size = nums.size();
        for(int i=0; i<size; i++)
        {
            if(nums[i] < s) s=nums[i];
            if(nums[i] > l) l = nums[i];

        }
        return gcd(s,l);
    }
};
