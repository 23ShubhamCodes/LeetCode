class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) 
    {
        int n=mat.size();
        int m=mat[0].size();
        vector<int> a;
        if(n*m != r*c)
            return(mat);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                a.push_back(mat[i][j]);
            }
        }    
        vector<vector<int>> ans(r,vector<int>(c));
        int k=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                ans[i][j] = a[k];
                k+=1;
            }
        }    
        return(ans);
    }
};