class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int min = 101;
        int max = 0;
        vector<int> he;
        unordered_map<int, bool> hehe;
        int size= nums.size(); 
        for(int i=0; i<size; i++)
        {
            if(min>nums[i]) min = nums[i];
            if(max<nums[i]) max = nums[i];
            hehe[nums[i]] = 1;
        }

        for(int i=min; i<max; i++)
        {
            if(!hehe[i]) he.push_back(i);
        }
        return he;


    }
};
