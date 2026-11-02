class Solution {
public:
    int dominantIndex(vector<int>& nums) 
    {
        int max=INT_MIN;
        int k=0;
        for(int i=0;i<nums.size();i++)
        {
            if(max < nums[i])
            {
                max=nums[i];
                k=i;
            }
        }    
        for(int i=0;i<nums.size();i++)
        {
            if(max==nums[i])
                continue;
            if(max < nums[i]*2)
                return(-1);
        }
        return(k);
    }
};