class Solution {
public:
    bool isSorted(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < nums[i - 1]) return false;
        }
        return true;
    }

    int minimumPairRemoval(vector<int>& nums) {
        int count = 0;

        while (!isSorted(nums)) {
            int minSum = INT_MAX;
            int index = 0;

            // Find adjacent pair with minimum sum
            for (int i = 0; i < nums.size() - 1; i++) {
                int s = nums[i] + nums[i + 1];
                if (s < minSum) {
                    minSum = s;
                    index = i;
                }
            }

            // Merge that pair
            nums[index] = nums[index] + nums[index + 1];
            nums.erase(nums.begin() + index + 1);

            count++;
        }

        return count;
    }
};
