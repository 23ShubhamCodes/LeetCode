class Solution {
public:
    int buyChoco(vector<int>& prices, int money) 
    {
        sort(prices.begin(),prices.end());
        int count=0;
        int m2=money; 
        for(int i=0;i<prices.size();i++)
        {
            if(count==2 || money <prices[i])
                break;
            money-=prices[i];
            count++;
        }
        if(count == 2 && money>=0)
            return(money);
        return(m2);
    }
};