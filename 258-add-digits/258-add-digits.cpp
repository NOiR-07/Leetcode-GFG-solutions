class Solution {
public:
    int summ(int s)
    {
        long sum=0;
        while(s)
        {
            sum=sum+s%10;
            s/=10;
            
        }
        return addDigits(sum);
    }
    int addDigits(int num) {
        if(num>9 )
          return summ(num);
        else
        return num;    
    }
     
};