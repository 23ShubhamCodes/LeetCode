class Solution {
public:
    double trimMean(vector<int>& arr) 
    {
        int n=arr.size();
        int l=n-(n/20) , s=n/20;
        sort(arr.begin(),arr.end());
        int sum=0,i=s;
        int count=0;
        while(i<l)
        {
            sum=sum+arr[i];
            i++;
            count++;
        }
        double ans=double(sum)/(count);
        return(ans);
    }
};