class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater=0;
        int l=0,r=height.size()-1;
        while(l<r){
            int wt=r-l;
            int ht= min(height[l],height[r]);
            int curr = wt * ht;
            maxwater = max (maxwater,curr);
            height[l]<height[r]?l++:r--;
        }
        return maxwater;
    }
};