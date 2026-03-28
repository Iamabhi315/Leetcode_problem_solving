class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> freq(26, 0);
        for(char c : words[0]) {
            freq[c - 'a']++;
        }
        vector<int> temp;
        for(int i = 0; i < words.size(); i++){
            temp = freq;
            fill(freq.begin(), freq.end(), 0);
            for(int j = 0; j < words[i].size(); j++){
                if(temp[words[i][j] - 'a'] > 0){
                    temp[words[i][j] - 'a']--;
                    freq[words[i][j] - 'a']++;
                }
            }
        }
        vector<string> v;

        for(int i = 0; i < 26; i++) {
            while(freq[i] > 0) {
                string temp(1, char(i + 'a'));
                v.push_back(temp);
                freq[i]--;
            }
        }
        return v;
    }
};