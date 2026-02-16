class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int max=-1;
        int n=arr.size();
        for(int j=arr.size()-1;j>=0;j--){
            int x = arr[j];
            arr[j]=max;
            if(x>max) max=x;
        }
        return arr;
    }
};