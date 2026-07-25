class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> m;
        int size= nums.size();
        for(int i=0; i<size; i++)
        {
            if(m.contains(nums[i]))
                return true;
            else 
                m.insert(nums[i]);
        }
        return false;
    }
};
