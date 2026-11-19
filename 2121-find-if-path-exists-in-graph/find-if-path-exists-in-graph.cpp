class Solution {
public:
    bool check(unordered_map<int, vector<int>>& adj, int src, int dest, vector<bool>& visited)
    {
        if(src == dest) return true;
        if(visited[src]) return 0;
        visited[src] = 1;
        for(int& node : adj[src])
        {
            if(check(adj, node, dest, visited)) return true;
        }
        return false;

    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int, vector<int>> adj;
        for(vector<int> &edge : edges)
        {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        vector<bool> visited(n, 0);
        return check(adj, source, destination, visited);
    }
};