class Solution {
public:
    int maximumLengthSubstring(string s) {
        int size = s.length();
        if(size ==0) return 0;

        int l=0 ;
        int arr[26] = {0};
        int count =0;
        for(int r=0; r<size; r++)
        {
            arr[s[r] - 'a']++;
            while(arr[s[r]-'a'] > 2) {arr[s[l] - 'a']--; l++;}


            count = max(count, r-l+1);
        }
        return count;
    }
};
