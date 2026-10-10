class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int m=matrix.size();
        int n=(m > 0) ? matrix[0].size() : 0;
        int l=0;
        int r=m-1;
        int mid;
        if(m==n && m==1 && matrix[0][0]!=target)
            return(false);
        if(m==n && m==1 && matrix[0][0]==target)
            return(true);
        while(l<=r)
        {
            mid=(l+r)/2;
            if(target >= matrix[mid][0] && target <= matrix[mid][n-1])
                break;
            if(target > matrix[mid][0])
            {
                l=mid+1;
                continue;
            }
            if(mid==0)
                break;
            else 
                r=mid-1;   
        } 
        l = 0;
        r = n-1;
        int i=mid;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(target == matrix[i][mid])
                return(true);
            if(target>matrix[i][mid])
            {
                l = mid+1;
                continue;
            }
            if(mid==0)
                break;
            else if(mid!=0)
                r = mid-1;
        }
        return(false);
    }
};