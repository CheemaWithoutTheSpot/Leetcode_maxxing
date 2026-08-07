class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow =0; 
        int fast =0;

        do
        {
            slow = nums[slow];
            fast = nums[nums[fast]];

        }while(slow != fast);

        int s = 0;
        do{
            s= nums[s];
            slow = nums[slow];
        }while(slow != s);
        return s;
    }
};
