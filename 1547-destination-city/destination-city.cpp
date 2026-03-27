class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, bool> mp;
        
        for(auto &p : paths) {
            mp[p[0]] = true;
        }
        
        for(auto &p : paths) {
            if(mp.find(p[1]) == mp.end()) {
                return p[1];
            }
        }
        
        return "";
    }
};