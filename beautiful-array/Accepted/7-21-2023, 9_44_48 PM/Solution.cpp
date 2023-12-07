// https://leetcode.com/problems/beautiful-array

class Solution {
public:
    vector<int> beautifulArray(int n) {
        vector<int> beautifulArray{1};
        while(beautifulArray.size()<n){
            vector<int> temp;
            for(int i:beautifulArray) if(i*2-1<=n) temp.push_back(i*2-1);
            for(int i:beautifulArray) if(i*2<=n) temp.push_back(i*2);
            beautifulArray=temp;
        }
        return beautifulArray;
    }
};