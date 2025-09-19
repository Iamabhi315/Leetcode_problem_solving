class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;

    int j = 0;  // slow pointer
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[j]) {   // new unique element mila
            j++;                    // next position pe move karo
            nums[j] = nums[i];      // overwrite with unique value
        }
    }
    return j + 1;  // unique elements ki length
}

};