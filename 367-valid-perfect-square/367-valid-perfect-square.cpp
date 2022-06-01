class Solution {
public:
    bool isPerfectSquare(int num) {
        long low=0,mid,high=num,ans=0;
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