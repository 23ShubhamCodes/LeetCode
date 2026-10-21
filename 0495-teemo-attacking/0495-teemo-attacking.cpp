class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) 
    {
        int count=0;
        for(int i=0;i<timeSeries.size();i++)
        {
            int end_time=timeSeries[i]+duration-1;
            if(i==timeSeries.size()-1)
            {
                count=count+duration;
            }
            if(i<timeSeries.size()-1 && end_time<timeSeries[i+1])
                count=count+duration;
            else if(i<timeSeries.size()-1 && end_time>=timeSeries[i+1])
            {
                count+=timeSeries[i+1]-timeSeries[i];
            }
        }    
        return(count);
    }
};