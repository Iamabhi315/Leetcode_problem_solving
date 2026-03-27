class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, bool>mp;
        for(int i = 0; i < paths.size(); i++)
        {
            mp[paths[i][0]] = true;
        }
        int i = 0;
        while(mp.find(paths[i][1]) != mp.end() && i<paths.size()) i++;
        return paths[i][1];
    }
};