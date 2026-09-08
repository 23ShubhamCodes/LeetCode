class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int right=nums.size()-1;
        int left=0;
        int mid;
        int c=0;
        while(left<=right)
        {   
            mid=(left+right)/2;
            if(nums[mid]==target)
            {
                c=1;
                return(mid);
            }
            else if(target>nums[mid])
            {
                left=1+mid;
            }
            else if(target<nums[mid])
            {
                right=mid-1;
            }
        }
            return(left++);
    }
};