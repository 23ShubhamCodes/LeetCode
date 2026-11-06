class Solution {
public:
    int findSpecialInteger(vector<int>& arr) 
    {
       /* int k=arr.size()/4;
        int p=0;
        int j=0;
        for(int i=0;i<arr.size();i++)
        {
            if(p>k || arr.size()==1)
            {
                j=i;
                break;
            }
            if(i!=arr.size()-1 && arr[i]!=arr[i+1] && p<=k)
            {
                p=0;
            }
            else
                p++;
        }
        if(j==0)
        {
            return(arr[arr.size()-1]);
        }
        return(arr[j]);*/
        int k = arr.size() / 4;
        int p = 1;

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] == arr[i - 1]) {
                p++;
            }
            else {
                p = 1;
            }

            if (p > k) {
                return arr[i];
            }
        }

        return arr[0];
    }
};