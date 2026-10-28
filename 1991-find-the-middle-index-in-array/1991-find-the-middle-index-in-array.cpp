class Solution {
public:
    int findMiddleIndex(vector<int>& nums) 
    {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
        }   
        int suml=0;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum-nums[i];
            if(suml==sum)
                return(i);
            else
                suml=suml+nums[i];
        }
        return(-1);
    }
};