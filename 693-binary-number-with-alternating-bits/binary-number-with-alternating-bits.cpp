class Solution {
public:
    bool hasAlternatingBits(int n) {
        bool x=(n&1);
        n=n>>1;
        while(n){
            if(x==(n&1)) return false;
            x=(n&1);
            n=n>>1;
        }
        return true;
        
    }
};