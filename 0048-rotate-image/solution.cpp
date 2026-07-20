class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int size= matrix.size();
    std::vector<std::vector<int>> res(size, std::vector<int>(size, 0)); 

        for(int i=0; i<size; i++)
        {
            for(int j=0; j<size; j++)
            {
                res[i][j] = matrix[size-j-1][i];

            }
        }
        matrix = res;
    }
};
