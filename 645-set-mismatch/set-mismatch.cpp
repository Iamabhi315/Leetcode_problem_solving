class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int ,int> mp;
        int n = nums.size();

        long long totalSum = (n*n + n) / 2;   // expected sum
        long long arraySum = 0;

        int temp; // duplicate number

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            arraySum += nums[i];

            if(mp[nums[i]] == 2)
                temp = nums[i];
        }

        return {temp, static_cast<int>(totalSum - (arraySum - temp))};
    }
};