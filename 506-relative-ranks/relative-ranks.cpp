class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<string> res(n);
        priority_queue<pair<int, int>> pri;

        for(int i=0; i<n; i++)
        {
            pri.push({score[i], i});
        }
        int rank = 1;
        while(!pri.empty())
        {
            int i = pri.top().second;
            pri.pop();
            if(rank ==1 ) res[i] = "Gold Medal";
            else if (rank ==2) res[i] = "Silver Medal";
            else if(rank ==3) res[i] = "Bronze Medal";
            else res[i] = to_string(rank);
            rank++; 
        }
        return res;
        
    }
};