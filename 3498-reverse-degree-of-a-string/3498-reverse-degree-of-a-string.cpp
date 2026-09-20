class Solution {
public:
    int reverseDegree(string s) 
    {
        vector<int> a;
        int b;
        for(int i=0;i<s.size();i++)
        {
            b=('z'-s[i])+1;
            a.push_back(b);
        }
        int temp=0,sum=0;
        for(int i=0;i<s.size();i++)
        {
            temp=a[i]*(i+1);
            sum=sum+temp;
        }
        return(sum);
    }
};