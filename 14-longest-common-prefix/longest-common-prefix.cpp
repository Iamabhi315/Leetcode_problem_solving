class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    string result = "";
    int n = strs.size();

    for(int i = 0; i < strs[0].length(); i++) {

        char temp = strs[0][i];

        for(int j = 0; j < n; j++) {

            if(i >= strs[j].length() || strs[j][i] != temp)
                return result;
        }

        result += temp;
    }

    return result;
}
};