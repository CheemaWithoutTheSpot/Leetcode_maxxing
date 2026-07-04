class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> hi(2);
        unordered_map<int, int> hash;
        int size = nums.size();

        for(int i=0; i<size; i++)
        {
            if(hash.count(target - nums[i]))
            {
                hi[1] = i;
                hi[0] = hash[target - nums[i]];
                break;
            }
            hash[nums[i]] = i;
        }
        return hi;

    }
};
