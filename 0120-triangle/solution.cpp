class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int size = triangle.size();
        if (size == 1) return triangle[0][0];
        int ans = INT_MAX;
        for(int i=1; i<size; i++)
        {
            int s = triangle[i].size();
            for(int j=0; j<s; j++)
            {
                int main;
                int adj;

                if(j==0) adj = triangle[i-1][j];
                else adj = triangle[i-1][j-1];

                if(j<s-1) main = triangle[i-1][j];
                else main = adj;

                triangle[i][j] = min(main + triangle[i][j] , adj + triangle[i][j]);

                if(i == size-1) ans = min(ans, triangle[i][j]);
            
            }

        }
        return ans;


    }
};
