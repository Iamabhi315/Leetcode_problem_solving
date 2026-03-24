class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool inc = false, dec = false;
        
        for (int i = 0; i < (int)nums.size() - 1; i++) {
            if (nums[i] < nums[i+1]) inc = true;
            if (nums[i] > nums[i+1]) dec = true;
            if (inc && dec) return false;  // both directions → not monotonic
        }
        
        return true;
    }
};