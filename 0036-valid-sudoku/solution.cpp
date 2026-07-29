class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        bool oh =1;
        for(int i=0; i<9; i++)
        {
            if(!oh) break;
            for(int j=0; j<9; j++)
            {
                if(board[i][j] == '.') continue;
                char dig = board[i][j];

                

                for(int k=0; k<9; k++)
                {
                    if(board[i][k] == dig && k != j) {oh =0; break;}
                    if(board[k][j] == dig && k != i) {oh = 0; break;}
                    
                }
                for(int k=(i/3)*3; k<(i/3)*3 + 3 && oh; k++)
                {
                    for(int l=(j/3)*3; l<(j/3)*3 + 3;l++ )
                    {
                        if(dig == board[k][l] && !(k==i && l ==j)) {oh = 0; break;}
                    }
                }

            }

        }
        return oh;
    }
};
