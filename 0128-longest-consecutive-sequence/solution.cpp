class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hehe;
        int size = nums.size();
        int longest =0;
        for(int i=0; i<size; i++)
        {
            hehe.insert(nums[i]);
        }

        for(const int& n : hehe)
        {
            if (!hehe.contains( n-1 ))
            {
                int l = 1;
                while(hehe.contains(n+l)) l++;
                longest = max(longest, l);
            }
        }
        return longest;
    }
};
