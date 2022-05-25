class Solution {
public:
    bool isPalindrome(int x) {
        long rev=0,num=x;
        if(num<0)
            return false;
        else
        {
        while(x!=0)
        {
            int temp=x%10;
            rev= rev*10+temp;
         x=x/10;
        }
        }
         if(num==rev)
            return true;
        else
            return false;
    }
       
};