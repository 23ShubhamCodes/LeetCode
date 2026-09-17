class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        if(digits[digits.size()-1]!=9)
        {
            digits[digits.size()-1]+=1;
            return(digits);
        }
        else
        {
            int c=0;
            vector<int> nums;
            for(int i=digits.size()-1;i>=0;i--)
            {
                if(digits[i]==9 && c==0)
                {
                    nums.push_back(0);
                }
                else if(digits[i]!=9 && digits[i+1]==9 && c==0)
                {
                    nums.push_back(digits[i]+1);
                    c=1;
                }
                else
                {
                    nums.push_back(digits[i]);
                    c=1;
                }
            }
            if(nums[nums.size()-1]==0)
                nums.push_back(1);
            reverse(nums.begin(),nums.end());
            return(nums);
        }
    }
};