class Solution {
public:
    int repeatedNTimes(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int k=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==nums[i+1])
            {
                k=nums[i];
                break;
            }
        }
        return(k);
    }
};