class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int k=nums.size()/2;
        int sol;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }        
        for(auto x:m)
        {
            if(x.second>k)
            {
                sol=x.first;
                break;
            }
        }
        return(sol);
    }
};