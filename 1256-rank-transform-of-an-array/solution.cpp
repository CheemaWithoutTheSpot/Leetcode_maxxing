#include<execution>
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> ar = arr;
        int size = ar.size();
        vector<int> res(size);
        sort(std::execution::par, ar.begin(), ar.end());


            auto new_end = std::unique(ar.begin(), ar.end()); 
        ar.erase(new_end, ar.end()); 


        std::unordered_map<int, int> hashMap;

            for (int i = 0; i < size; i++) {
                if(hashMap.contains(ar[i])) continue;
                hashMap[ar[i]] = i+1;

            }
        
        for(int i=0; i<arr.size(); i++)
        {
            res[i] = hashMap[arr[i]];
        }
        return res;
    }
};
