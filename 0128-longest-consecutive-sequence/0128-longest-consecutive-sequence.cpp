class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        if(nums.size()==0)
            return(0);
        int count=0;
        int count2=0;
        int i=0;
        int temp=0;
        for(auto x: mp)
        {
             if(i==0)
            {
                temp=x.first;
                i++;
                continue;
            }
            if(temp+1==x.first)
                count++;
            else
            {
                count2 > count ? count2=count2 : count2=count;
                count=0;
            }
            temp=x.first;
        }
        if(count>count2)
            return(count+1);
        return(count2+1);
    }
};