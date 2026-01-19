class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> repeat;

        while (n != 1) {
            if (repeat.count(n)) return false;
            repeat.insert(n);

            int sum = 0;
            while (n > 0) {
                int x = n % 10;
                sum += x * x;
                n /= 10;
            }
            n = sum;
        }
        return true;
    }
};
