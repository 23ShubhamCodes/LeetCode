class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        int max=INT_MIN,temp2=0;
        map<int,int> mp;
        vector<int> ans;
        for(int j=0;j<nums.size();j++)
        {
            mp[nums[j]]++;           
        }
        int temp=INT_MIN;
        for(int i=0;i<k;i++)
        {
            max=INT_MIN;
            for(auto x : mp)
            {
                temp=x.first;
                auto it= find(ans.begin(),ans.end(),temp);
                if(max<x.second && (temp2!=temp || temp==0) && (it==ans.end()))
                {
                    max=x.second;
                    temp2=x.first;
                }
            }
            ans.push_back(temp2);
        }    
        return(ans);
    }
};