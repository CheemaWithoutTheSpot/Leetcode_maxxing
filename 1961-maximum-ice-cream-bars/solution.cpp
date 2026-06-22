#include<execution>
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int count =0;
        sort(std::execution::par, costs.begin(), costs.end());
        int size = costs.size();
        int sum=0;
        for(int i=0; i<size; i++)
        {
            sum = sum + costs[i];
            if(sum>coins) break;
        }
        if(sum<=coins)
        {
            return size;
        }
       
            for(int j=0; j<size; j++)
            {
                
                    if(coins-costs[j] >= 0)
                    {
                    coins = coins-costs[j];
                    costs[j]=0;
                    count++;
                    }
                    else
                    break;

                
            }

        return count;
    }
};
