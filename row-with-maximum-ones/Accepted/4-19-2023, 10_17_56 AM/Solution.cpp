// https://leetcode.com/problems/row-with-maximum-ones

class Solution {
public:
    int countOnes(vector<int> arr){
        int count=0;
        for(int i:arr)
        if(i==1)
        count++;
        return(count);
    }
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int max_ones=INT_MIN,index=0;
        for(int i=0;i<mat.size();i++){
            if(countOnes(mat[i])>max_ones){
                max_ones=countOnes(mat[i]);
                index=i;
            }
        }
        return{index,max_ones};
    }
};