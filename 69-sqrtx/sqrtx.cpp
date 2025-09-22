class Solution {
public:
    int mySqrt(int x) {
        int i=0;
        while(1){
            if((long long)i*i==x) return i;
            if((long long)i*i>x) return i-1;
            i++;
        }
    }
};