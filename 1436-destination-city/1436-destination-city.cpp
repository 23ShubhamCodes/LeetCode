class Solution {
public:
    string destCity(vector<vector<string>>& paths) 
    {
        /*string ans;
        for(int i=0;i<paths.size();i++)
        {
            string a=paths[i][1];
            int c=0;
            for(int j=0;j<paths.size();j++)
            {
                if(i==j)
                    continue;
                string b=paths[j][0];
                if(a==b)
                {
                    c=1;
                    break;
                }
            }
            if(c==1)
                continue;
            else 
                return(a);
        }
        return("");*/
    map<string,int> a;
    for(int i=0;i<paths.size();i++)
    {
        a[paths[i][0]];
    }    
    for(int i=0;i<paths.size();i++)
    {
        string ans=paths[i][1];
        if(a.find(ans)==a.end())
            return(ans);
    }    
    return("");
    }
};