
class Solution {
public:
    double search(int* ptrr, int size)
    {
        
    if((size)%2 ==1)
    {
        return ptrr[(size)/2];
    }
    else
    {
        return static_cast<double>((ptrr[(size)/2] + ptrr[((size)/2)-1])  )/2;
    }

    

    }

    double search(vector<int>& ptrr, int size)
    {
        
    if((size)%2 ==1)
    {
        return ptrr[(size)/2];
    }
    else
    {
        return static_cast<double>((ptrr[(size)/2] + ptrr[((size)/2)-1])  )/2;
    }

    

    }


    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        int m = nums1.size();
        int n = nums2.size();

        int* ptr = new int[m + n];
        int ii = 0, jj = 0;


        if(m ==0)
        {
            return search(nums2, n);

        }
        else if(n==0)
        {
            return search(nums1, m);
        }
        else if (m == 0 || n==0)
        {
            return 0;
        }
for (int i = 0; i < m + n; i++)
{
    if (jj >= n || (ii < m && nums1[ii] < nums2[jj]))
    {
        ptr[i] = nums1[ii];
        ii++;
    }
    else
    {
        ptr[i] = nums2[jj];
        jj++;
    }
}
    return search(ptr , m+n);
    }
};
