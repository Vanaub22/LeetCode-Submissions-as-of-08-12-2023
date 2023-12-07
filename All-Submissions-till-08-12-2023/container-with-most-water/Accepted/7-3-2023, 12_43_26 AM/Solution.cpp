// https://leetcode.com/problems/container-with-most-water

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0,right=height.size()-1,maxVolume=INT_MIN;
        while(left<right){
            maxVolume=max(maxVolume,(right-left)*min(height[left],height[right]));
            if(height[left]<height[right]) left++;
            else right--;
        }
        return maxVolume;
    }
};