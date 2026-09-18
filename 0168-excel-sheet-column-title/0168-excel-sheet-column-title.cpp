class Solution {
public:
    string convertToTitle(int columnNumber) 
    {
        vector<char> s;
        string ans;
        int a;
        while(columnNumber>26)
        {
            a=columnNumber%26;
            if(a==0)
            {
                s.push_back('Z');
                columnNumber=(columnNumber/26)-1;
                continue;
            }
            s.push_back(('A'-1)+a);
            columnNumber/=26;
        }
        s.push_back(('A'-1)+columnNumber);
        for(int i=s.size()-1;i>=0;i--)
        {
            ans=ans+s[i];
        }
        return(ans);
    }
};