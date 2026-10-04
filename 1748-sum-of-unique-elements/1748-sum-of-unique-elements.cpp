class Solution {
public:
    int sumOfUnique(vector<int>& nums) 
    {
        map<int,int> a;
        for(int i=0;i<nums.size();i++)
        {
            a[nums[i]]++;
        }    
        int sum=0;
        for(auto x:a)
        {
            if(x.second==1)
                sum+=x.first;
        }
        return(sum);
    }
};