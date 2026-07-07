int N, M;
int c =0;
bool ans=0;
vector<vector<bool>> vis;

class Solution {
public:
    bool valid(int x, int y, char a , vector<vector<char>>& board)
    {
        if( x<0 || x>N-1 || y<0 || y>M-1) return 0;
        if(vis[x][y]) return 0;
        if(a == board[x][y]) return 1; 
        return 0;
        
    }
    void dfs(int x, int y, vector<vector<char>>& board, const string& word)
    {
        if(ans) return;

        if(c==word.length()-1)
        {
            ans=1;
        }
        vis[x][y] = 1;

        if(valid(x-1, y, word[c+1], board) && !ans) {c++; dfs(x-1 , y , board, word);}
        if(valid(x, y+1, word[c+1], board) && !ans) {c++;dfs(x , y+1 , board, word);}
        if(valid(x+1, y, word[c+1], board) && !ans) {c++;dfs(x+1 , y , board, word);}
        if(valid(x, y-1, word[c+1], board) && !ans) {c++; dfs(x , y-1 , board, word);}

        c--;
        vis[x][y] =0;

    }
    bool exist(vector<vector<char>>& board, string word) 
    {
        N = board.size();
        M = board[0].size();

        int freq[128] = {0};
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < M; j++)
            {
                freq[(int)board[i][j]]++;
            }
        }

        for(int i = 0; i < (int)word.length(); i++)
        {
            char ch = word[i];
            freq[(int)ch]--;
            if(freq[(int)ch] < 0)
            {
                return 0;   
            }
        }

        vis.assign(N, vector<bool>(M, 0));
        ans=0;
        c=0;

        for(int i=0; i< N;i++)
        {
            for(int j=0; j<M && !ans; j++)
            {
                if(board[i][j] == word[0])
                {
                    dfs(i, j, board, word);
                    c=0;

                }
            }
        }
        return ans;
    }
};
