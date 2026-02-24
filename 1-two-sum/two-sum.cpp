class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int>mp;
       int i;
       for(i=0;i<nums.size();i++){
            if(mp.find(target-nums[i])!=mp.end()){
                break;
            }
            else{
                mp[nums[i]]=i;
            }
       }
       return {mp[target-nums[i]],i};
    }
};