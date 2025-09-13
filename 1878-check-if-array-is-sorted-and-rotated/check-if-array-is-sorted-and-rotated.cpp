class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0; // Count the number of breaks in sorted order
        
        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) { 
                count++; // Found a break in the order
            }
        }
        
        return count <= 1; // At most one break is allowed for a rotated sorted array
    }
};