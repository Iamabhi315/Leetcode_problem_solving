class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        unordered_map<int , bool>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int temp = stoi(nums[i], nullptr, 2); // Output: 10
            mp[temp]= true;
        }
        long long maxi=pow(2,n) - 1;
        for(int i=0;i<nums.size();i++){
            if(mp.find(i)==mp.end()){
                string temp=bitset<16>(i).to_string();
                return temp.substr(16-n,n);
            }
        }
        string temp=bitset<16>(n).to_string();
        return temp.substr(16-n,n);
    }
};