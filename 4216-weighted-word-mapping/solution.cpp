class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) 
    {
        string str;
        for(int i=0; i<words.size(); i++)
        {   long sum=0;
            for(int j=0; j<words[i].length(); j++)
            {
                sum = sum+weights[words[i][j] - 'a'];

            }
            sum = sum % 26;
            str += static_cast<char>(abs(sum-'z'));
        }    
        return str;
    }
};
