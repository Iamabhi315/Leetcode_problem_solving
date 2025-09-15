class Solution {
public:
    int maxArea(vector<int>& height) {

        int i=0,j=height.size()-1;
        int max=0;
        while(i<j){
            int x=min(height[i],height[j]);
            int y=x*(j-i);
            if(max<y) max=y;
            if(height[i]>height[j]) j--;
            else i++;
            
        }
        return max;
        
    }
};