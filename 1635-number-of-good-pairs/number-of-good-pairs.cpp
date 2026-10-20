class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int res =0;
        unordered_map<int, int> h;
        int size = nums.size();
        for(int i=0; i<size; i++)
        {
            h[nums[i]]++;
        }
        for(const auto& num : h)
        {
            int n = num.second;
            res += ((n*(n-1))/2);
        }   
        return res;

    }
};