class Solution {
public:

    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        // Start from the last digit
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;   // just increment
                return digits; // done, no carry needed
            }
            digits[i] = 0; // set to 0, carry to next
        }

        // If all were 9, e.g., [9,9,9] → [1,0,0,0]
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
