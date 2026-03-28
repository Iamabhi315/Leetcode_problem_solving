class Solution {
public:
    int longestPalindrome(string s) {
    unordered_map<char, int> mp;
    
    for(char c : s) mp[c]++;

    int res = 0;
    bool odd = false;

    for(auto &p : mp) {
        res += (p.second / 2) * 2;
        if(p.second % 2 == 1) odd = true;
    }

    return odd ? res + 1 : res;
}
};