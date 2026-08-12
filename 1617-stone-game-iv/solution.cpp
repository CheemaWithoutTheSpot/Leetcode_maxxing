class Solution {
public:

    bool sol(int n, vector<int>& win)
    {
        if(n==0) return 0;
        if(win[n] != -1) return (bool)win[n];

        for(int i=1; i*i<= n; i++)
        {
            if(sol(n-(i*i), win) == 0) 
            {
                win[n] = 1;
                return 1;
            }
        }
        win[n] = 0;
        return 0;
    }

    bool winnerSquareGame(int n) {
        vector<int> win(n+1, -1);
        return sol(n, win);
        
    }
};
