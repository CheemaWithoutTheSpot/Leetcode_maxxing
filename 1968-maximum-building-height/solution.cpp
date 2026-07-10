#include<execution>

class Solution {
public:

    int maxBuilding(int n, vector<vector<int>>& restrictions) 
    {
        int m=0;
        restrictions.push_back({1,0});
        restrictions.push_back({n, n-1});
        int size = restrictions.size();


        sort(std::execution::par, begin(restrictions), end(restrictions));

        for(int i=1 ; i< size; i++)
        {
            int dist =  restrictions[i][0] -  restrictions[i-1][0];
            restrictions[i][1] = min(restrictions[i][1],  restrictions[i-1][1] + dist);
        }

        for(int i = size-2; i>=0; i--)
        {
            int dist =  restrictions[i+1][0] -  restrictions[i][0];
            restrictions[i][1] = min(restrictions[i][1],  restrictions[i+1][1] + dist);

        }

        for(int i=1; i<size; i++)
        {
            
            m = max( m , max(restrictions[i][1],  restrictions[i-1][1]) + (restrictions[i][0] -  restrictions[i-1][0] -  abs( restrictions[i][1] -  restrictions[i-1][1]))/2 );
            
        }

        return m;

    }
};
