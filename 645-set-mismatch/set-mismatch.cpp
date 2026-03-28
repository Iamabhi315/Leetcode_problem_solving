class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
    vector<int> freq(nums.size()+1, 0);

    for(int x : nums) freq[x]++;

    int dup = -1, miss = -1;

    for(int i = 1; i <= nums.size(); i++) {
        if(freq[i] == 2) dup = i;
        if(freq[i] == 0) miss = i;
    }

    return {dup, miss};
}
};