class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        int lucky_num=-1;
        for (auto& [key, val] : mp)
        {
            if(key == val && key>lucky_num) lucky_num = key;
        }
        return lucky_num;
        
    }
};