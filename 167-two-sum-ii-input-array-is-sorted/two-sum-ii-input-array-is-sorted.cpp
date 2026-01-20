class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        unordered_map<int,int>mp;
        int index1;
        int index2;
        for(int i=0;i<n;i++){
            int x=target-numbers[i];
            if(mp.find(x) != mp.end()){
                index1=mp[x];
                index2=i+1;
            }
            mp[numbers[i]]=i+1;
        }
        return {index1,index2};
        
    }
};