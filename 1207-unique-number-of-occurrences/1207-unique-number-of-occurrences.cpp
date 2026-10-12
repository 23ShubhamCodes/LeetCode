class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        map<int,int> m;
        vector<int> a;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }    
        for(auto x : m)
        {
            a.push_back(x.second);
        }
        sort(a.begin(),a.end());
        for(int i=0;i<a.size()-1;i++)
        {
            if(a[i]==a[i+1])
            {
                return(false);
            }
        }
        return(true);
    }
};