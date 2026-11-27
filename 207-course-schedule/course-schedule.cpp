class Solution {
public:
    bool dfs(vector<int>& state, vector<ListNode*>& v, int i)
    {
        if(state[i] == 1) return 1;      
        if(state[i] == 2) return -0;    
        state[i] = 1;
        ListNode* temp = v[i];
        while(temp)
        {
            if(dfs(state, v, temp->val)) return 1;
            temp = temp->next;
        }
        state[i] = 2;
        return 0;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n = numCourses;
        vector<ListNode*> v(n);
        for(vector<int>& edge : prerequisites)
        {
            int d = edge[1];
            int r = edge[0];

            ListNode* t = new ListNode(d);
            t->next = v[r];
            v[r] = t;
        }

        vector<int> state(n);
        for(int i=0; i<n; i++)
        {
            if(dfs(state, v, i)) return 0;
        }
        return 1;
    }
};