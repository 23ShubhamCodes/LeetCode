class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        map<char,char> ans;
        for(int i=0;i<s.size();i++)
        {
            if(ans.find(s[i])!=ans.end())
            {
                if(ans[s[i]]!=t[i])
                {
                    return(false);
                }
            }
            ans[s[i]]=t[i];
        }    
        map<char,char> temp;
        for(int i=0;i<s.size();i++)
        {
            if(temp.find(t[i])!=temp.end())
            {
                if(temp[t[i]]!=s[i])
                {
                    return(false);
                }
            }
            temp[t[i]]=s[i];
        }   
        return(true);
    }
};