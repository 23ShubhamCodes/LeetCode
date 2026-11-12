class Solution {
public:
    int thirdMax(vector<int>& nums) 
    {
        long long fm=LLONG_MIN;
        long long sm=LLONG_MIN;
        long long tm=LLONG_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>fm)
            {
                tm=sm;
                sm=fm;
                fm=nums[i];
            }
            else if(nums[i]>sm && nums[i]!=fm)
            {
                tm=sm;
                sm=nums[i];
            }
            else if(nums[i]>tm && nums[i]!=sm  && nums[i]!=fm)
            {
                tm=nums[i];
            }
        }    
        if(tm == LLONG_MIN )
            return(fm);
        else
            return(tm);
    }
};