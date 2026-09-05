class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int i=n-1;
        char c=' ';
        int temp=0;
        if(s[i]==c)
        {
            while(s[i]==c)
            {
                i--;
            }
        }
        while(i>=0)
        {
            if(s[i]==c)
            {
                break;
            }
            else
            {
                temp++;
                i--;
            }
        }   
        return temp;
    }
};