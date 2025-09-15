class Solution {
public:
    int maxArea(vector<int>& height) {

        int i=0,j=height.size()-1;
        int maxi=0;
        while(i<j){
            maxi = max(maxi, (j - i) * min(height[i], height[j]));
            if(height[i]>height[j]) j--;
            else i++;
            
        }
        return maxi;
        
    }
};