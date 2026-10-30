class Solution {
public:
    vector<int> sumZero(int n) 
    {
        vector<int> a;
        int l=(n/2)*-1;
        int r=n/2;
        for(int i=0;i<n/2;i++)
        {
            a.push_back(l);
            a.push_back(r);
            l+=1;
            r-=1;
        }
        if(n%2!=0)
        {
            a.push_back(0); 
            return(a);
        }
        return(a);
    }
};