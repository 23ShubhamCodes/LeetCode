class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int n=nums.size();
        int c=nums[n-1];
        int i=0;
        int j=1;
        while(j<n)
        {
            if(nums[i]==nums[j])
            {
                j++;
            }
            else
            {
                nums[i+1]=nums[j];
                i++;
                j++;
            }
        }    
        int k=0;
        for(int b=0;b<n;b++)
        {
            if(nums[b]==c)
            {
                k++;
                break;
            }
            else
            {
                k++;
            }
        }
        return(k);
    }
};