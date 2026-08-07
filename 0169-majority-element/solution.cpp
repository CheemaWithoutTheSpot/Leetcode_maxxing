class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int , int> hehe;
        int size = nums.size();
        for(int i=0; i<size; i++)
        {
            hehe[nums[i]]++;

            if(hehe[nums[i]] > size/2) return nums[i];
        }

        return 0;
    }
};
