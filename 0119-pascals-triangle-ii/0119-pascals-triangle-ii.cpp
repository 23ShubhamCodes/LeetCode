class Solution {
public:
    vector<int> getRow(int rowIndex) 
    {
        vector<int> ans;
        vector<vector<int>> temp;
        for(int i=0;i<=rowIndex;i++)
        {
            vector<int> a(i+1,1);
            for(int j=1;j<i;j++)
            {
                a[j]=temp[i-1][j-1]+temp[i-1][j];
            } 
            if(i==rowIndex)
                ans.insert(ans.end(), a.begin(), a.end());
            temp.push_back(a);
        }
        return(ans);
    }
};