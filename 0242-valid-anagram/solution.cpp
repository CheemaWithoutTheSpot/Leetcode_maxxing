class Solution {
public:
    bool isAnagram(string s, string t) {
        int size1 = s.length();
        int size2 = t.length();

        if(size1 != size2)
        return 0;

        std::unordered_map<char, int> freq;
        std::unordered_map<char, int> freq2;

        for(int i=0; i<size1; i++)
        {
            freq[s[i]]++;
            freq2[t[i]]++;
        }
        return freq == freq2;
    }
};
