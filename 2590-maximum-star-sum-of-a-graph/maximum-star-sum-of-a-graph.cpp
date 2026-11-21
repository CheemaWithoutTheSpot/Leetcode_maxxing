int maggs;
struct Node
{
    int dest;
    int val;
    int len;
    Node* next;

    Node()
    {
        dest = 0;
        val =0;
        len =0;
        next = nullptr;
    }
    Node(int d, int v)
    {
        dest = d;
        val =v;
        len =0;
        next = nullptr;
    }

};
class Solution {
public:
    void dfs(Node* n, int k, int sum)
    {
        vector<int> b;
        b.reserve(n->len);
        while(n)
        {
            b.push_back(n->val);
            n=n->next;
        }
        make_heap(b.begin(), b.end());
        maggs = max(maggs, sum); 
        while (k && !b.empty() && b.front() > 0)
        {
            sum += b.front();
            maggs= max(sum, maggs);
            pop_heap(b.begin(), b.end());
            b.pop_back();
            k--;
        }
    }
    int maxStarSum(vector<int>& vals, vector<vector<int>>& edges, int k) {
        maggs = INT_MIN;
        unordered_map<int, Node*> v;
        for(vector<int>& edge : edges)
        {
            Node* n2 = new Node(edge[0], vals[edge[0]]);
            Node* n1 = new Node(edge[1], vals[edge[1]]);
        
            if(!v.contains(edge[0]))v[edge[0] ] = nullptr;
            n1->next = v[edge[0]];
            v[edge[0]] = n1;
            if(n1->next == nullptr) n1->len = 1;
            else
            n1-> len = (n1->next)->len +1;


            if(!v.contains(edge[1]))v[edge[1] ] = nullptr;
            n2->next = v[edge[1]];
            v[edge[1]] = n2;
            if(n2->next == nullptr) n2->len = 1;
            else
            n2-> len = (n2->next)->len +1;
        }
        maggs = *max_element(vals.begin(), vals.end());
        for(auto& n : v)
        {

            dfs(n.second, min(k, (n.second)->len), vals[n.first]);

        }
        return maggs;
    }
};