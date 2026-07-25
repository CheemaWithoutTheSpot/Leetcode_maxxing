class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        int size = nums.size();
        unordered_map<int, int> h;
        for(int i=0; i<size; i++)
        {
            h[nums[i]]++;
        }

        for (const auto& hh : h) {
            if(hh.second>2) return 0;
        }
        return 1;
    }
};
