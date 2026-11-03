class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) 
    {
        /*vector<int> a;
        int temp=0;
        int carry=0;
        int i=1; 
        while(k>0)
        {
            temp=k%10;
            if(carry==0)
            {
                num[nums.size()-i]=num[num.size()-i]+
            }
            
        }  */
        vector<int> ans;
        int i = num.size() - 1;

        while(i >= 0 || k > 0)
        {
            if(i >= 0)
            {
                k += num[i];
                i--;
            }
            ans.push_back(k % 10);
            k /= 10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};