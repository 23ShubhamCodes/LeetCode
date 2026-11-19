class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) 
    {
        int m=board.size();
        int n=board[0].size();
        vector<int> a;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int count=0;
                if(i!=m-1 && board[i+1][j]==1)
                    count++;
                if(i!=m-1 && j!=n-1 && board[i+1][j+1]==1)
                    count++;
                if(i!=0 && board[i-1][j]==1)
                    count++;
                if(i!=0 && j!=0 && board[i-1][j-1]==1)
                    count++;
                if(j!=n-1 && board[i][j+1]==1)
                    count++;
                if(j!=0 && board[i][j-1]==1)
                    count++;
                if(i!=0 && j!=n-1 && board[i-1][j+1]==1)
                    count++;
                if(i!=m-1 && j!=0 && board[i+1][j-1]==1)
                    count++;
                if(count<2)
                {
                    a.push_back(i);
                    a.push_back(j);
                    a.push_back(0);
                }
                else if(count==3 && board[i][j]==0)
                {
                    a.push_back(i);
                    a.push_back(j);
                    a.push_back(1);
                }
                else if(count>3)
                {
                    a.push_back(i);
                    a.push_back(j);
                    a.push_back(0);
                }
            }
        }    
        for(int i=0;i<a.size();i+=3)
        {
            board[a[i]][a[i+1]]=a[i+2];
        }
    }
};