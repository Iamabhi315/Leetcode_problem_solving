class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int> mp;

        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }

        int maxOdd = INT_MIN;
        int minEven = INT_MAX;

        for(auto x : mp) {
            if(x.second % 2 == 1) {   
                maxOdd = max(maxOdd, x.second);
            }
            else {                    
                minEven = min(minEven, x.second);
            }
        }

        if(maxOdd == INT_MIN || minEven == INT_MAX)
            return -1;  

        return maxOdd - minEven;
    }
};