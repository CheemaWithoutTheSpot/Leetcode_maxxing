class Solution {
public:

    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;

        if(nums[0] == 0 && nums[1] == 0 && nums[2] == 0 && nums.back() == 0) {v.push_back({0,0,0}); return v;}


        unordered_map<int, int> hehe;
        set<vector<int>> seen;
        int size = nums.size();
        for(int i =0; i<size; i++ )
        {
            hehe[nums[i]]++;
        }

        for(int i=0; i< size; i++)
        {
            hehe[nums[i]]--;
            for(int j=i+1; j<size; j++)
            {

                hehe[nums[j]]--;
                
                if(hehe[(-nums[j]) + (-nums[i])] > 0) 
                {
                    vector<int> trip = {nums[i], nums[j], (-nums[j]) + (-nums[i])};
                    sort(trip.begin(), trip.end());
                    if (seen.insert(trip).second) {
                        v.push_back(trip);
                }

                }
                hehe[nums[j]]++;

            }
            hehe[nums[i]]++;
        }
        return v;
    }
};
