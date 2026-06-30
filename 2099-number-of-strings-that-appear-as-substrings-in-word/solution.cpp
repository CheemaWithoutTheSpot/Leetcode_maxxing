class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count =0;
        for(int i=0; i< patterns.size(); i++)
        {   bool h=0;
            for(int j=0; j<word.length() && h==0; j++)
            {

                string hh;
                for(int k=j; k<word.length(); k++)
                {
                    hh += word[k];
                    if(hh== patterns[i])
                    {
                        hh= "";
                        count++;
                        h=1;
                        break;
                    }

                }

            }
        }
        return count;
    }
};
