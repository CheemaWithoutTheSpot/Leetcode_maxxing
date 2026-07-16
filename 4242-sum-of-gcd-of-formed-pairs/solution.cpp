#include<execution>
class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int largest = 0;
        long long ans=0;

        int size = nums.size();
        vector<int> prefixGcd(size);

        for(int i =0; i<size; i++)
        {
            if(largest< nums[i])
                largest = nums[i];
            prefixGcd[i] = gcd(nums[i], largest);
        }

        sort(execution::par, prefixGcd.begin(), prefixGcd.end());

        for(int i=0; i < size/2; i++)
        {
            ans = ans + gcd(prefixGcd[i] , prefixGcd[size-1-i]);
        }
        return ans;

    }
};
