class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int distance=height.size()-1;
        int storage=0;
        int i=0,j=height.size()-1;
        while(i<j)
        {
            if(storage<(min(height[i],height[j])*distance))
            {
                storage=min(height[i],height[j])*distance;
            } 
            if(height[i]>height[j])
            {
                j--;
            }
            else if(height[j]>height[i])
            {
                i++;
            }
            else
                i++;
            distance--;
        }
        return(storage);
    }
};