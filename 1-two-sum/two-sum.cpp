class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int, int> mp;
       vector<int> result;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }   
        for(int i=0;i<nums.size();i++){
            int x=target-nums[i];
            if (mp.find(x) != mp.end() && mp[x]!=i) {
                result.push_back(i);
                result.push_back(mp[x]);
                break;
            } 
    }
    return result;
    }
};