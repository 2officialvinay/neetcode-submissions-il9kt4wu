class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxWater = 0;
        int start = 0;
        int end = heights.size()-1;
        while(start < end){
            int x = end-start;
            int y = min(heights[start], heights[end]);
            int currWater = x*y;
            if(maxWater < currWater){
                maxWater = currWater;
            }
            if(heights[start] > heights[end]){
                end--;
            }
            else{
                start++;
            }
        }
        return maxWater;
    }
};
