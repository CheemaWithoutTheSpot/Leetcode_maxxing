class Solution {
public:

    int countMajoritySubarrays(vector<int>& nums, int target) {
        int res =0;
        int size = nums.size();
        for(int i=0; i< size; i++)
        {   int c=0;
            for(int j=i; j< size; j++)
            {   
                if(target == nums[j]) c++;
                if(2 * c > j-i+1)
                {
                    res++;
                }
            }
        }
        return res;
    }
};
