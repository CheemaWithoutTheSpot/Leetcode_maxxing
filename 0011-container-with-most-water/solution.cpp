class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int largest =0;
        int size = height.size();
        int dist = size-1;

        const int* ptr1 = &height[0];
        const int* ptr2 = &height[size-1];
        for(int i=0, j=0; dist>0;)
        {   
            if(*ptr1 > *ptr2)
            {
                if(largest < (*ptr2)*dist) largest = (*ptr2)*dist;
                ptr2--;
                j++;

            }
            else if(*ptr2> *ptr1)
            {
                if(largest < (*ptr1)*dist) largest = (*ptr1)*dist;
                ptr1++;
                i++;
                
            }
            else
            {
                if(largest < (*ptr2)*dist) largest = (*ptr2)*dist;

                if(*(ptr1+1) >= *(ptr2-1))
                {
                    ptr1++; i++;
                }
                else
                {
                    ptr2--; j++;
                }

            }
            
            dist = size - i -j-1;
        } 
        return largest;
    }
};
