class Solution {
public:
    int maxRotateFunction(vector<int>& nums) 
    {
        int sum=0;
        long long f=0;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            f+=1LL*i*nums[i];
        }
        long long max=f;
        for(int i=nums.size()-1;i>=0;i--)
        {
            f=f+sum-(1LL*nums.size()*nums[i]);
            if(max<f)
                max=f;
        }
        return(max);
    }
};