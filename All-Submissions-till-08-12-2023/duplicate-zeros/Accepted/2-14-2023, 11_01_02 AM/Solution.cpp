// https://leetcode.com/problems/duplicate-zeros

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
       int i,len=arr.size();
       for(i=0;i<arr.size();i++){
           if(arr[i]==0){
           arr.insert(arr.begin()+i,0);
           i++;
           arr.erase(arr.end()-1);
           }
       } 
    }
};