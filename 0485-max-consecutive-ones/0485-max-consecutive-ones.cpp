class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int sum=0;
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                sum=sum+nums[i];
            } 
            else
            {
                if(j<sum)
                    j=sum;
                sum=0;
            }
        }
        if(j<sum)
            j=sum;
        return(j);
    }
};