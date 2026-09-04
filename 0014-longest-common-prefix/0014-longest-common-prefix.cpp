class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string b;
        string a;
        int n=strs.size();
        if(n==1)
        {
            return(strs[0]);
        }   
        int min=strs[0].size(); 
        int k=0;
        for(int i=1;i<n;i++)
        {
            if(min>strs[i].size())
            {
                min=strs[i].size();
                k=i;
            }
        }
        a=strs[k];
        for(int i=0;i<min;i++)
        {
            int j=0;
            while(j<n)
            {
                if(k==j)
                {
                    j++;
                    continue;
                }
                if(a[i]!=strs[j][i])
                {
                    break;
                }
                j++;
            }
            if(j==n)
            {
                b=b+a[i];
            }
            else if(j<n+1 && b.size()==0)
            {
                return(b);
            }
            else if(j<n+1)
            {
                return(b);
            }
        }
        return(b);
    }
};