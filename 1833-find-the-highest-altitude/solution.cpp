class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       int h[gain.size()+1];
       h[0]=0;
       int g = 0;
       for(int i=0; i<gain.size(); i++ )
        {
            h[i+1] = g+gain[i];
            g= h[i+1];
        }
        int hi=0;
        for(int i=1; i<gain.size()+1; i++ )
        {
            if(hi<h[i])
            {
                hi = h[i];
            }
        }
        return hi;
    }
};
