class Solution {
    vector<int> arr;
    vector<int> copy;
public:
    Solution(vector<int>& nums) {
        static bool seeded = false;
        if (!seeded) {
            srand(time(0));
            seeded = 1;
        }
        arr = nums;
        for(int i=0; i<arr.size(); i++)
        {
            copy.push_back(arr[i]);
        }

        
    }
    
    vector<int> reset() {
        int size = copy.size();
        for(int i=0; i<size; i++)
        {
            arr[i] = copy[i];
        }
        return arr;
    }
    
    vector<int> shuffle() {
        vector<int> visited;
        int size = copy.size();
        for(int i=0; i<size; i++)
        {
            visited.push_back(i);
        }
        
        for(int i=0; i <size; i++)
        {
            int avb_size = visited.size();
            int idx = rand()% avb_size ;
            arr[i] = copy[visited[idx]];
            std::swap(visited[idx], visited[ avb_size- 1]);
            avb_size--;
            visited.pop_back();

        }
        return arr;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
