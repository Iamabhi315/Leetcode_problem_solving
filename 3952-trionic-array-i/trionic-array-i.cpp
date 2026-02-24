class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if(n < 3) return false;

        int i = 0;

        while(i < n-1 && nums[i] < nums[i+1]) {
            i++;
        }

        if(i == 0) return false; 

        int peak = i;
        while(i < n-1 && nums[i] > nums[i+1]) {
            i++;
        }

        if(i == peak) return false; 

        int valley = i;
        while(i < n-1 && nums[i] < nums[i+1]) {
            i++;
        }

        if(i == valley) return false;

        return i == n-1;
    }
};