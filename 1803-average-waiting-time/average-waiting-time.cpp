class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int t = 0;
        double total = 0;

        for(auto &c : customers){
            t = max(t, c[0]);     // wait if needed
            t += c[1];            // cooking
            total += (t - c[0]);  // waiting time
        }

        return total / customers.size();
    }
};