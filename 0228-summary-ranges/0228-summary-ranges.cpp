class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) 
    {
       int i=0,j=1,k=0;
       vector<string> s;
       if(nums.size()==0)
       {
        return(s);
       }
       while(j<nums.size())
       {
            if(nums[j]==nums[i]+1)
            {
                i++;
                j++;
            }
            else if(k==i)
            {
                s.push_back(to_string(nums[k]));
                k=j;
                i=j;
                j++;
            }
            else
            {
                s.push_back(to_string(nums[k])+"->"+to_string(nums[i]));
                k=j;
                i=j;
                j++;
            }
       }
       if(k==i)
         s.push_back(to_string(nums[k]));
       else
         s.push_back(to_string(nums[k])+"->"+to_string(nums[i]));
       return(s);
    }
};