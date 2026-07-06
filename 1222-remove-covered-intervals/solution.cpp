class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int size = intervals.size();
        int count =0;
        vector<bool> intv(size);
        
        for(int i=0; i<size; i++)
        {  
            
            for(int j=i+1; j<size && !intv[i]; j++)
            {
                if(!intv[j] && intervals[i][0] <= intervals[j][0] && intervals[i][1] >= intervals[j][1])
                {
                    intv[j] = 1;
                    count++;
                }

                if(!intv[j] && intervals[i][0] >= intervals[j][0] && intervals[i][1] <= intervals[j][1])
                {
                    intv[i] = 1;
                    count++;
                }
            }

            

        }
        return size-count;
    }
};
