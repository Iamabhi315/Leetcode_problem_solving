class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long reverse=0;
        int y=x;
        while(y){
            reverse=reverse*10 + (y%10);
            y=y/10;
        }
        if(x==reverse) return true;
        else return false;
        
        
    }
};