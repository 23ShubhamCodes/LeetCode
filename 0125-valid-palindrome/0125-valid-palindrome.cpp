class Solution {
public:
    bool isPalindrome(string s) 
    {
        int i=0;
        int j=s.size()-1;
        for(int k=0;k<=j;k++)
        {
            if(isalpha(s[k]))
            {
                s[k]=tolower(s[k]);
            }
        }
        while(i<=j)
        {
            if(isalnum(s[i])==0)
            {
                i++;
            }
            else if(isalnum(s[j])==0)
            {
                j--;
            }
            else if(s[i]==s[j])
            {
                i++;
                j--;
            }
            else if(s[i]!=s[j])
            {
                return(false);
            }
        }
        return(true);
    }
};