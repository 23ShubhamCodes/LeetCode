/*class Solution {
public:
    string makeGood(string s) 
    {
        /*vector<char> ans;
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            ans.push_back(s[i]);
            if(c>0 && (tolower(ans[c])==ans[c-1] || toupper(ans[c])==ans[c-1]))
            {
                ans.pop_back();
                ans.pop_back();
                c=c-2;
            }
            c++;
        }   
        if(ans.size()==0)
        {
            return("");
        }
        string s1; 
        for(int i=0;i<ans.size();i++)
        {
            s1=ans[i];
        }
        return(s1);
};*/
class Solution {
public:
    string makeGood(string s) 
    {
        vector<char> ans;
        int c = 0;

        for(int i = 0; i < s.size(); i++)
        {
            ans.push_back(s[i]);

            if(c > 0 &&
               tolower(ans[c]) == tolower(ans[c-1]) &&
               islower(ans[c]) != islower(ans[c-1]))
            {
                ans.pop_back();
                ans.pop_back();
                c = c - 2;
            }

            c++;
        }

        string s1;

        for(int i = 0; i < ans.size(); i++)
        {
            s1 += ans[i];   // NOT s1[i] = ans[i]
        }

        return s1;
    }
};