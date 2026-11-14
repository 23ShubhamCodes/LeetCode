class Solution {
public:
    vector<int> circularGameLosers(int n, int k) 
    {
        map<int,int> a;
        vector<int> b;
        int i=1,j=1;
        int c=0;
        while(c==0)
        {
            if(i>n)
                i=i%n;
            if(i==0)
                i=n;
            a[i]++;
            if(a[i]>1)
                break;
            i = i+j*k ;
            j++;
        }    
        for(int i=1;i<=n;i++)
        {
            auto it=a.find(i);
            if(it==a.end())
                b.push_back(i);
        }
        return(b);
    }
};