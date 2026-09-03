class Solution {
public:
    bool isPalindrome(int x) {
         long i=0;
        int c=x;
        while(x>0)
        {
            i=(i*10)+(x%10);
            x=x/10;
        }
        if(c<0)
        {
            return(false);
        }
        else if(i==c)
        {
            return(true);
        }
        else
        {
            return(false);
        }
    
    }
};