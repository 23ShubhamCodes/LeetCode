class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) 
    {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int count=0;
        /*for(int i=0;i<g.size();i++)
        {
            for(int j=0;j<s.size();j++)
            {
                if(g[i]<=s[j])
                {
                    //s.erase(s.begin()+j);
                    s[j]*=-1;
                    count+=1;
                    break;
                }
                
            }
        }*/
        int i=0,j=0;
        while(i<g.size() && j<s.size())
        {
            if(g[i]<=s[j])
            {
                count++;
                i++;
                j++;
            }
            else
                j++;
        }   
        return(count);
    }
};