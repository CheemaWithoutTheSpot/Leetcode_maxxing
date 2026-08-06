class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        int currval = -101; 
        int size= nums.size();
        for(int i=0; i<size; i++)
        {
            if(currval == nums[i]) continue;

            currval = nums[i];
            nums[k] = nums[i];
            k++;
        }
        return k;
    }
};
