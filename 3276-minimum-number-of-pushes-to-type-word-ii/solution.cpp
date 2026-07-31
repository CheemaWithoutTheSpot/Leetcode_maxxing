class Solution {
public:


    string frequencySort(string s) {
        int freq[26] = {0};
        for (char c : s) {
            freq[c - 'a']++;
        }
        
        vector<pair<char, int>> v;
        for (int i =0; i <26; i++) {
            if (freq[i] > 0) {
                v.push_back({(char)(i + 'a'), freq[i]});
            }
        }
        
        sort(v.begin(), v.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
            return a.second > b.second;
        });
        
        string result;
        result.reserve(s.length());
        for (auto& p : v) {
            result.append(p.second, p.first);
        }
        return result;
    }

    int minimumPushes(string word) {
        int size= word.length();
        int count=0;
        int cnt = 0;
        int hehe[26] = {0};
        word = frequencySort(word);
        for(int i=0; i<size; i++)
        {
            if(hehe[word[i] - 'a'])
            {
                count += hehe[word[i] -'a'];
                continue;
            }
            count += 1+ (cnt/8);
            hehe[word[i] - 'a'] = 1+(cnt/8);
            cnt++;


        }
        return count;
    }
};
