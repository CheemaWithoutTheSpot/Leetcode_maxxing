class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int hehe=0;
        for(int num : nums)
        {
            hehe ^= num;
        }
        return hehe;
    }
};
