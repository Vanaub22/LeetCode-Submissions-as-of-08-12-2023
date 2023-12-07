// https://leetcode.com/problems/largest-perimeter-triangle

class Solution {
public:
    int perimeter(int a,int b,int c){
        if(a+b<=c)
        return(0);
        return(a+b+c);
    }
    int largestPerimeter(vector<int>& nums) { 
        int pm=0,p;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
        p=perimeter(nums[i],nums[i+1],nums[i+2]);
        if(pm<p)
        pm=p;
        }
        return(pm);
    }
};