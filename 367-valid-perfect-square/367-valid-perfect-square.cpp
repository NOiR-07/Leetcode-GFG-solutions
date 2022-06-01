class Solution {
public:
    bool isPerfectSquare(int num) {
        long low=0,mid,high=num/2,ans=0;
        if(num==1)
            return true;
        while(low<=high)
        {
            mid=(low+high)/2;
            long sq=mid*mid;
            if(num==sq)
                return true;
            if(sq<=num)
            {
                low=mid+1;     
            }
            else
                high=mid-1;
        }
        return false;
    }
};