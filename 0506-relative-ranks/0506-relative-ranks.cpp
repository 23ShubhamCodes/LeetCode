class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) 
    {
        vector<int> a;
        vector<string>  s;
        for(int i=0;i<score.size();i++)
        {
            a.push_back(score[i]);
        }    
        sort(a.begin(),a.end(),greater<>());
        for(int i=0;i<score.size();i++)
        {
            auto it = find(a.begin(),a.end(),score[i]);
            int Index = it-a.begin();
            if(Index == 0)
                s.push_back("Gold Medal");
            else if(Index == 1)
                s.push_back("Silver Medal");
            else if(Index == 2)
                s.push_back("Bronze Medal");
            else
                s.push_back(to_string(Index+1));
        }
        return(s);
    }
};