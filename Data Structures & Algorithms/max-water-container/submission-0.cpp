class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size() - 1;
        int area = 0;
        while(l < r){
            int ar = min(heights[l], heights[r])*(r - l);
            area = max(ar, area);
            if(heights[l] > heights[r]){
                r--;
            } else {
                l++;
            }
        }
        return area;
    }
};
