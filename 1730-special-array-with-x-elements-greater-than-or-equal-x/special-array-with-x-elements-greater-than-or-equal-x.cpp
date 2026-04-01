class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n = nums.size();
        
        // Step 1: Counting array
        vector<int> count(n + 1, 0);

        for(int num : nums){
            if(num >= n) count[n]++;
            else count[num]++;
        }

        // Step 2: Prefix sum from right
        int total = 0;
        for(int i = n; i >= 0; i--){
            total += count[i];   // elements >= i
            
            if(total == i){
                return i;
            }
        }

        return -1;
    }
};