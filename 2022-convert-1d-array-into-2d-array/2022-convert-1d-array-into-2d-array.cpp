class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) 
    {
        vector<vector<int>> b;
        vector<vector<int>> a(m, vector<int>(n));
        int k=0;
        if(original.size() != m*n)
            return(b);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                a[i][j]= original[k];
                k++;
            }
        }    
        return(a);
    }
};