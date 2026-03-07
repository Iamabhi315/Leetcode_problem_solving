class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int> mp;
        vector<string> result;

        for(int i=0;i<list1.size();i++){
            mp[list1[i]] = i;
        }

        int sum = INT_MAX;

        for(int i=0;i<list2.size();i++){
            if(mp.find(list2[i]) != mp.end()){
                
                int currSum = mp[list2[i]] + i;

                if(currSum < sum){
                    sum = currSum;
                    result.clear();
                    result.push_back(list2[i]);
                }
                else if(currSum == sum){
                    result.push_back(list2[i]);
                }
            }
        }

        return result;
    }
};