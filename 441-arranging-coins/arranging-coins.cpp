class Solution {
public:
    int arrangeCoins(int n) {
        int count=1;
        while(n){
            n=n-count;
            if(n<0) return count-1;
            count++;
        }
        return count-1;
    }
};