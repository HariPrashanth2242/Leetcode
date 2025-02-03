class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi=INT_MIN;
        int l=0;
        int r=height.size()-1;
        while(l<r){
            int m=(r-l)*min(height[l],height[r]);
            maxi=max(m,maxi);
            if(height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return maxi;
    }
};