class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<unordered_map<int, bool>> v(n);
        for(vector<int>& t : trust)
        {
            (v[t[0]-1])[t[1]-1] = 1;
        }
        int sv = -1;
        for(int i=0; i<n; i++)
        {
            if(v[i].empty()) sv = i; 
        }
        if(sv==-1) return -1;
        for(int i=0; i<n; i++)
        {
            if(i!=sv)
            if(!v[i].contains(sv)) return -1;
        }
        return sv+1;
    }
};