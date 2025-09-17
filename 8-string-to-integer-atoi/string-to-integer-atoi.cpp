class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        long long num = 0;   // use long long to avoid overflow
        int sign = 1;        // default positive
        int i = 0;

        // 1. Skip leading spaces
        while (i < n && s[i] == ' ') i++;

        // 2. Check sign
        if (i < n && (s[i] == '-' || s[i] == '+')) {
            if (s[i] == '-') sign = -1;
            i++;
        }

        // 3. Convert digits
        while (i < n && s[i] >= '0' && s[i] <= '9') {
            num = num * 10 + (s[i] - '0');

            // 4. Handle overflow
            if (num * sign > INT_MAX) return INT_MAX;
            if (num * sign < INT_MIN) return INT_MIN;

            i++;
        }

        return (int)(num * sign);
    }
};
