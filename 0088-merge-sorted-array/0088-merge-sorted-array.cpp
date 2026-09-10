class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        vector<int> temp;
        int i=0;
        while(i<m)
        {
            temp.push_back(nums1[i]);
            i++;
        }
        i=0;
        int j=0;
        int k=0;
        while(k<m+n)
        {
            if(j==n)
                break;
            else if(i==m)
                break;
            else if(temp[i]<=nums2[j])
            {
                nums1[k]=temp[i];
                i++;
                k++;
            }
            else if(temp[i]>nums2[j])
            {
                nums1[k]=nums2[j];
                j++;
                k++;
            }
        }
        if(i==m)
        {
            while(j<n)
            {
                nums1[k]=nums2[j];
                k++;
                j++;
            }
        }
        else if(j==n)
        {
            while(i<m)
            {
                nums1[k]=temp[i];
                k++;
                i++;
            }
        }

    }
};