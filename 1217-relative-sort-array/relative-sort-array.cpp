class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int , int>mp;
        vector<int>res;
        for(int i = 0; i < arr1.size(); i++) mp[arr1[i]]++;
        for(int i = 0; i < arr2.size(); i++){
            while(mp[arr2[i]] > 0){
                res.push_back(arr2[i]);
                mp[arr2[i]]--;
        }
        }
        vector<int>temp;
        for(auto &p : mp){
            int freq = p.second;
            while(freq--){
                temp.push_back(p.first);
            }
        }
        sort(temp.begin(), temp.end());
        for(int i = 0; i < temp.size(); i++) res.push_back(temp[i]);
        return res;
    }
};