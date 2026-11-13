class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) 
    {
        /*if(ops.size()==0)
            return(m*n);
        vector<vector<int>> a(m,vector<int>(n,0));
        for(int i=0;i<ops.size();i++)
        {
            for(int j=0;j<ops[i][0];j++)
            {
                for(int k=0;k<ops[i][1];k++)
                {
                    a[j][k]+=1;
                }
            }
        }
        int max=INT_MIN;
        for(int j=0;j<a.size();j++)
        {
            for(int k=0;k<a[j].size();k++)
            {
                if(a[j][k]>max)
                {
                    max=a[j][k];
                }
            }
        }
        int count=0;
        for(int j=0;j<a.size();j++)
        {
            for(int k=0;k<a[j].size();k++)
            {
                if(max==a[j][k])
                    count++;
            }
        }
        return(count);*/
        long minrow=m;
        long mincolumn=n;
        for(int i=0;i<ops.size();i++)
        {
            minrow = minrow > ops[i][0] ? ops[i][0] : minrow;
            mincolumn = mincolumn > ops[i][1] ? ops[i][1] : mincolumn;
        }
        return(minrow*mincolumn);
    }
};