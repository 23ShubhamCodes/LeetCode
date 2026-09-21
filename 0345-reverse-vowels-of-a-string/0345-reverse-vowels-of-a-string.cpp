class Solution {
public:
    bool isvowel(char ch)
    {
        string s={"aeiouAEIOU"};
        int k=0;
        for(int i=0;i<10;i++)
        {
            if(ch==s[i])
            {
                k=1;
                break;
            }
        }
        if(k==0)
        {
            return false;
        }
        else
        {
            return(true);
        }
    }
    string reverseVowels(string s) 
    {
        int i=0,j=s.size()-1;
        while(i<j)
        {
            char temp;
            if(isvowel(s[i]) && isvowel(s[j]))
            {
                temp =s[i];
                s[i]=s[j];
                s[j]=temp;
                i++;
                j--;
            }
            else if(isvowel(s[i]) && !isvowel(s[j]))
            {
                j--;
            }
            else if(!isvowel(s[i]) && isvowel(s[j]))
            {
                i++;
            }
            else if(!isvowel(s[i]) && !isvowel(s[j]))
            {
                i++;
                j--;
            }
        }
        return(s);
    }
};