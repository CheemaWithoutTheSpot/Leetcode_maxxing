class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int sum = m+n;
        vector<int> ans(m+n);
        int i=0;
        int j=0;
        for(int k=0; k<sum; k++)
        {


            if(j>=n){ans[k] = nums1[i]; i++;}
            else if(i>=m){ans[k] = nums2[j]; j++;}
            else if(nums1[i] < nums2[j]) {ans[k] = nums1[i]; i++;}
            else if(nums1[i] >= nums2[j]) {ans[k] = nums2[j]; j++;}

        }
        nums1 = ans;

    }
};
