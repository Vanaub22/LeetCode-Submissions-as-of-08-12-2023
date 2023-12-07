// https://leetcode.com/problems/container-with-most-water

class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_vol=0;
        for(int i=0;i<height.size();i++)
        for(int j=0;j<height.size();j++){
            if((min(height[i],height[j])*abs(i-j))>=max_vol)
            max_vol=min(height[i],height[j])*abs(i-j);
        }
        return(max_vol);
    }
};