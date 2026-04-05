class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int , int>mp;
        for(int i=0;i<heights.size();i++){
            mp[heights[i]] = i;
        }
        vector<string>res;
        for(auto it = mp.rbegin(); it != mp.rend(); it++){
            res.push_back(names[it->second]);
        }
        return res;
    }
};