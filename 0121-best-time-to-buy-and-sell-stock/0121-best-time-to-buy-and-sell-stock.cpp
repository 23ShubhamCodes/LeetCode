class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int max=0;
        int i=0,j=1;
        
        while(j<prices.size())
        {
            int c=0;
            if(prices[i]>=prices[j])
            {
                i=j;
            }
            if(prices[j]>prices[i])
            {
                c=prices[j]-prices[i];
            }
            if(max<c)
            {
                max=c;
            }
            j++;
        }     
        return(max);    
    }
};