class Solution {
public:
    long long maxArrayValue(vector<int>& nums) 
    {
        int i=nums.size()-1;
        long long ans=0;
        while(i>=0)
        {
            if(i==0 && nums[i]<ans)
                ans+=nums[0];
            if(i!=0 && nums[i]>=nums[i-1])
            {
                ans+=1LL*(nums[i]+nums[i-1]);
                i=i-2;
                break;
            }   
            i-=1;
        }
        while(i>=0)
        {
            if(ans<nums[i])
            {
                ans=nums[i];
                i-=1;
                continue;
            }
            if(i==0 && nums[i]<=ans)
                ans+=nums[0];
            if(i!=0 && nums[i]<=ans)
            {
                ans+=1LL*(nums[i]);
            }   
            i-=1;
        }   
        if(ans==0)
            return(nums[0]);
        return(ans);
    }
};