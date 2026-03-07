class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        long long n = nums.size();

        long long S = n*(n+1)/2;
        long long Sq = n*(n+1)*(2*n+1)/6;

        long long arraySum = 0;
        long long arraySqSum = 0;

        for(int num : nums){
            arraySum += num;
            arraySqSum += (long long)num * num;
        }

        long long x = arraySum - S;
        long long y = (arraySqSum - Sq) / x;

        int duplicate = (x + y) / 2;
        int missing = y - duplicate;

        return {duplicate, missing};
    }
};