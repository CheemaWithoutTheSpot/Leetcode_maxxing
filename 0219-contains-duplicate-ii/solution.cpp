class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_map<int, int> seen;
    int size = nums.size();

    for (int i=0; i<size; i++) 
    {
        if (seen.count(nums[i]) && (i - seen[nums[i]] <= k)) return true;
        seen[nums[i]] = i;
    }
    return false;}
};
