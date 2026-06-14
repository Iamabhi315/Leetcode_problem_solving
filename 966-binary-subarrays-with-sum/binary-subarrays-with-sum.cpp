class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> count;
        
        int prefixSum = 0;
        int res = 0;
        
        count[0] = 1;

        for (int num : nums) {
            prefixSum += num;

            res += count[prefixSum - goal];

            count[prefixSum]++;
        }

        return res;
    }
};