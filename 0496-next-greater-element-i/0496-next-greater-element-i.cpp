class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> a;
        for(int i=0;i<nums1.size();i++)
        {
            auto it=find(nums2.begin(),nums2.end(),nums1[i]);
            int j=it-nums2.begin()+1;
            int len=a.size();
            while(j<nums2.size())
            {
                if(nums1[i]<nums2[j])
                {
                    a.push_back(nums2[j]);
                    break;
                }
                j++;
            }
            if(len==a.size())
                a.push_back(-1);
        } 
        return(a);   
    }
};