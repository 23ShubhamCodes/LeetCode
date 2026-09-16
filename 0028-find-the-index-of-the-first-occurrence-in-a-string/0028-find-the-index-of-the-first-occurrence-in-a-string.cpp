class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        /*int j=0,k=-1;
        for(int i=0;i<=haystack.size();i++)
        {
            if(j==needle.size())
            {
                k=i-j;
                break;
            }
            if(needle[j]!=haystack[i])
            {
                j=0;
            }
            if(needle[j]==haystack[i])
            {

                j++;
            }
        }*/
        int i=0,k=-1;
        while(i<=haystack.size())
        {
            int j=0;
            if(haystack[i]==needle[j])
            {
                while(j<needle.size())
                {
                    if(haystack[i+j]==needle[j])
                    {
                        j++;
                    }
                    else
                        break;
                }
            }
            if(j==needle.size())
            {
                k=i;
                break;
            }
            i++;
        } 
        if(k!=-1)
        {
            return(k);
        }  
        else
            return(k);
    }
};