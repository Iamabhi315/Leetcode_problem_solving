class Solution {
public:
    int mySqrt(int x) {
        int l=0,u=x,mid,ans=0;
        for(int i=0;i<=x;i++){
            mid=l+(u-l)/2;
            if(u<l){
                ans = u;
                break;
            }
            if((long long)mid*mid==x) {
                ans = mid;
                break;
            }

            else{
                    if((long long)mid*mid<x) l=mid+1;
                    else u=mid-1;
            }
        }
        return ans;
    }
};