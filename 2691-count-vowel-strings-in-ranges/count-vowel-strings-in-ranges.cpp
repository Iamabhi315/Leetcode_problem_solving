class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();
        vector<int> isvowel(n, 0);

        auto isVowel = [&](char c){
            return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
        };

        // Build prefix sum
        for(int i = 0; i < n; i++){
            bool valid = isVowel(words[i][0]) && isVowel(words[i].back());
            isvowel[i] = (i == 0 ? 0 : isvowel[i-1]) + (valid ? 1 : 0);
        }

        vector<int> res;

        // Answer queries
        for(auto &q : queries){
            int l = q[0], r = q[1];

            if(l == 0)
                res.push_back(isvowel[r]);
            else
                res.push_back(isvowel[r] - isvowel[l-1]);
        }

        return res;
    }
};