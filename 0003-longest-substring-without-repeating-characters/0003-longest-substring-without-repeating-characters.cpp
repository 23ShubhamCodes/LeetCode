class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        unordered_map<char,int> m1;
        int i=0,j=0,total=0,max=0;
        while(j<s.size())
        {
            m1[s[j]]++;
            
            while(m1[s[j]]>1)
            {
                m1[s[i]]--;
                i++;
            }
            
            total=j-i+1;

            if(max<total)
            {
                max=total;
            }
            j++;
        }
        return(max);
    }
};