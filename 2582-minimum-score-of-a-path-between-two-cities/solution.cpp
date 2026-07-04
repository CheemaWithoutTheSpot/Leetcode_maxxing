using WeightedGraph = vector<vector<pair<int, int>>>;

class Solution {
public:

    void dfs(int i, vector<bool>& visited, int& res, WeightedGraph& adjList)
    {
        if(visited[i])
        {
            return;
        }
        visited[i]=1;
        for(const auto& [nei, dist] :adjList[i])
        {
            res = min(res, dist);
            dfs(nei, visited, res, adjList);
        }
    }

    int minScore(int n, vector<vector<int>>& roads) {
    WeightedGraph adjList(n+1);
    vector<bool> visited(n);


        for(int i=0; i<roads.size(); i++)
        {
            adjList[roads[i][0]].emplace_back(roads[i][1], roads[i][2]);
            adjList[roads[i][1]].emplace_back(roads[i][0], roads[i][2]);
        }

    int res=10000000;

    dfs(1, visited, res, adjList);
    return res;

    }
};
