class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) 
    { /*
        for(int i=0; i<nums.size();i++)
        {
            int j=i+1;
            if(i!=nums.size()-1 && nums[i]==nums[j] )
            {
                nums[i]*=2;
                nums[j]=0;
            }
        }   
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                j=i;
            if(j<i && nums[j]==0)
            {
                nums[j]=nums[i];
                nums[i]=0;
            }
        }
        return(nums);
    }*/
    for(int i=0; i<nums.size();i++)
    {
        int j=i+1;
        if(i!=nums.size()-1 && nums[i]==nums[j] )
        {
            nums[i]*=2;
            nums[j]=0;
        }
    }
    vector<int> a;
    int count=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==0)
        {
            count++;
            continue;
        }
        a.push_back(nums[i]);
    }
    for(int i=0;i<count;i++)
    {
        a.push_back(0);
    }
    return(a);
    }
};