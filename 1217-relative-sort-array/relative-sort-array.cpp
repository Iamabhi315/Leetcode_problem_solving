class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> count(1001, 0);
        vector<int> res;

        // Step 1: count frequency
        for(int x : arr1){
            count[x]++;
        }

        // Step 2: place arr2 elements
        for(int x : arr2){
            while(count[x] > 0){
                res.push_back(x);
                count[x]--;
            }
        }

        // Step 3: remaining elements (sorted automatically)
        for(int i = 0; i <= 1000; i++){
            while(count[i] > 0){
                res.push_back(i);
                count[i]--;
            }
        }

        return res;
    }
};