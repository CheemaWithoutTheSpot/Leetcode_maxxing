class Solution {
public:
    vector<int> constructRectangle(int area) {
        int w = sqrt(area);
        int l = 1;
        int maggs =INT_MAX; 
        vector<int> res(2);
        while(w != 0)
        {
            if(area%w == 0)
            {
                l = area/w;
                if(maggs>l-w)
                {
                    res[0] = l; 
                    res[1] = w;
                    maggs = l-w;
                }
            } 
            w--;
        }
        return res;
    }
};
