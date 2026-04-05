class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int t_completion = customers[0][0];
        int n = customers.size();
        double avg = 0;
        for(int i = 0; i < n; i++){
            if(t_completion >= customers[i][0]){
                t_completion += customers[i][1];
                avg += (t_completion - customers[i][0]);
            }
            else{
                t_completion = customers[i][0] + customers[i][1] ;
                avg += t_completion - customers[i][0];
            }
        }
        return avg/(double)n;
    }
};