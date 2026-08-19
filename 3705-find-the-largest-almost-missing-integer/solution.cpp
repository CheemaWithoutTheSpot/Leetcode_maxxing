class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int size = nums.size();
        int max = 0;

        if(k==1)
        {
            bool oh = 0;
            int arr[51] = {0};
            for(int i=0; i<size; i++)
            {
                arr[nums[i]]++;
            }
            for(int i=0; i<size; i++)
            {
                if(nums[i] > max && arr[nums[i]] == 1)
                {
                     max = nums[i];
                     oh = 1;
                }
                
            }
            if(!oh) max = -1;
        }

        else if(k==size)
        {
            for(int i=0; i<size; i++)
            {
                if(nums[i] > max) max = nums[i];
                
            }
        }
        else
        {
            bool valid0 = 1, valid1 = 1;
            for(int i=1; i<k; i++)
            {
                if(nums[i] == nums[0]) nums[0] = -1;
                if(nums[size-i-1] == nums[size-1]) nums[size-1] = -1;
            }
            if(nums[0] != -1 && nums[size-1] != -1 && nums[0] == nums[size-1])
            {
                nums[0] = -1;
                nums[size-1] = -1;
            }

            for (int i=k; i<size; i++) {
                if (nums[i] == nums[0]) { valid0 = 0; break; }
            }
            for (int i=0; i< size-k; i++) {
                if (nums[i] == nums[size-1]) { valid1 = 0; break; }
            }

            int a = valid0 ? nums[0] : -1;
            int b = valid1 ? nums[size-1] : -1;
            if (a==-1 && b==-1) return -1;
            max = std::max(a, b);
        }

        return max;

    }
};
