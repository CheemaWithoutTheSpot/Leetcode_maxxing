class Solution {
public:
    int findAny(vector<int>& nums, int target, int left, int right)
    {
        if(left > right) return -1;
        int mid = left + (right - left) / 2;
        if(nums[mid] == target) return mid;
        else if(nums[mid] < target) return findAny(nums, target, mid+1, right);
        else return findAny(nums, target, left, mid-1);
    }

    int findLeftBoundary(vector<int>& nums, int target, int left, int right)
    {
        int result = right; 
        while(left <= right)
        {
            int mid = left + (right - left) / 2;
            if(nums[mid] == target)
            {
                result = mid;
                right = mid - 1;   
            }
            else
            {
                left = mid + 1;   
            }
        }
        return result;
    }

    int findRightBoundary(vector<int>& nums, int target, int left, int right)
    {
        int result = left; 
        while(left <= right)
        {
            int mid = left + (right - left) / 2;
            if(nums[mid] == target)
            {
                result = mid;
                left = mid + 1;    
            }
            else
            {
                right = mid - 1;
            }
        }
        return result;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> hehe(2, -1);
        if(nums.empty()) return hehe;

        int anyIndex = findAny(nums, target, 0, nums.size() - 1);
        if(anyIndex == -1) return hehe;  

        hehe[0] = findLeftBoundary(nums, target, 0, anyIndex);
        hehe[1] = findRightBoundary(nums, target, anyIndex, nums.size() - 1);

        return hehe;
    }
};
