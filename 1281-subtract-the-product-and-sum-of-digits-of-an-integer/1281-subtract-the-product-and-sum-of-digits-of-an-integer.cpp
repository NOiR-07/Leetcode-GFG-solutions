class Solution {
public:
    int subtractProductAndSum(int n) {
        int num=n,temp=0,pro=1,sum=0;
        while(num>0)
        {
            temp=num%10;
            sum+=temp;
            pro*=temp;
            num/=10;
        }
        return pro-sum;
    }
};