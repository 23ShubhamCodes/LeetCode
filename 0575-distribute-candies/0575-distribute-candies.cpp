class Solution {
public:
    int distributeCandies(vector<int>& candyType) 
    {
        set<int> a;
        for(int i=0;i<candyType.size();i++)
        {
            a.insert(candyType[i]);
        }    
        int n=candyType.size()/2;
        if(a.size()<n)
            return(a.size());
        return(n);
    }
};