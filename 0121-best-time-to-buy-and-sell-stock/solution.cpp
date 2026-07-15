class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int smallest =prices[0]; 
        int res =0;
        int ressmall=0;
        int size = prices.size();
        for(int i=1; i<size; i++)
        {
            if(smallest> prices[i])
            {
                smallest = prices[i];
                continue;
            }
            res = prices[i] - smallest;

            if(res>ressmall)
            ressmall = res;
            
        }
        return ressmall;
    }
};
