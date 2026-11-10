class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) 
    {
        unordered_map<int,int> a;
        for(int i=0;i<deck.size();i++)
        {
            a[deck[i]]++;
        }    
        int g=0;
        for(auto x:a)
        {
            g = gcd(g, x.second);
        }
        return(g>=2);
    }
};