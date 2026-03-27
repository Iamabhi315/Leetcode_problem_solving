class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, string>mp;
        for(int i = 0; i < paths.size(); i++)
        {
            mp[paths[i][0]] = paths[i][1];
        }
        string result = "";
        int count = 0;
        for(int i = 0; i < paths.size(); i++)
        {
            string temp = paths[i][0];
            int tempCount = 0;
            while(mp.find(temp) != mp.end())
            {
                temp = mp[temp];
                tempCount++;
            }
            if(tempCount == paths.size()) return temp;
            if(tempCount > count)
            {
                count = tempCount;
                result = temp;
            }
        }
        return result;
    }
};