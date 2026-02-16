class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        
        for(int i = 0; i < 32; i++) {
            result <<= 1;        // shift left
            result |= (n & 1);   // take last bit of n
            n >>= 1;             // remove last bit
        }
        
        return result;
    }
};