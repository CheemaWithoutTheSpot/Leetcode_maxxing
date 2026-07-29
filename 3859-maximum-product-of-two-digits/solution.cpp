class Solution {
public:
    int maxProduct(int n) {
        int size =0;
        vector<int> nums;
        while(n>0)
        {
            nums.push_back(n%10);
            size++;
            n/=10;
        }
        int big =0;
        int finj =0;
        int big1 = 0;
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<size; j++)
            {
                if(i==0)
                {
                    if(big<nums[j]) {big = nums[j]; finj = j;}
                    continue;
                }
                
                    if(big1 < nums[j] && nums[j] <= big) big1 = nums[j];
            }
            nums[finj] = 0;
        }
        return big * big1;
    
    }
};
