class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> h;
        priority_queue<pair<int, char>> q;
        string res;
        int n = s.length();
        for(int i=0; i<n; i++)
        {
            h[s[i]]++;
        } 
        for (const auto& [key, value] : h) 
        {
            q.push({value, key});
        }
        while(!q.empty())
        {
            int count = (q.top()).first;
            char c = (q.top()).second;
            res.append(count, c); 
            q.pop();

        }
        return res;

    }
};