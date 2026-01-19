class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int max=0;
        int index;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>max){
                max=mp[nums[i]];
                index=i;
            }
        }
        return nums[index];
    }
};