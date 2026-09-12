class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        /*int a=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            a=a^nums[i];
        }
        return(a);
        */
        unordered_map<int,int> a;
        for(int i=0;i<nums.size();i++)
        {
            a[nums[i]]++;
        }
        int ans;
        for(auto x : a)
        {
            if(x.second==1)
            {
                ans=x.first;
                break;
            }
        }
        return(ans);   
    }
};