class Solution {
public:

    void dfs(int k, vector<bool>& sus, vector<int>& t, vector<vector<int>>& adjlst)
    {
        sus[k]=1;
        for(const auto& nei : adjlst[k])
        {
            t[nei]--;
            if(!sus[nei]) dfs(nei, sus, t, adjlst);
        }
    }

    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        vector<vector<int>> adjlst(n);
        vector<int> touch(n, 0);
        vector<bool> sussyBaka(n, 0);

        for(int i=0; i<invocations.size(); i++)
        {
            adjlst[invocations[i][0]].push_back(invocations[i][1]);
            touch[invocations[i][1]]++;
        }

        dfs(k, sussyBaka, touch, adjlst);

        vector<int> res;
        for(int i=0; i<n; i++)
        {
            
            if(sussyBaka[i])
            {
                if(touch[i])
                {
                    vector<int> ress;
                    for(int i=0; i<n; i++)
                    {
                        ress.push_back(i);
                    }
                    return ress;
                }
            }
            else res.push_back(i);
        }
        return res;
    }
};
