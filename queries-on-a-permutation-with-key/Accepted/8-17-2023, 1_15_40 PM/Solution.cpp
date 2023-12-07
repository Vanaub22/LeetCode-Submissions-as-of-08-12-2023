// https://leetcode.com/problems/queries-on-a-permutation-with-key

class Solution {
public:
    void permute(vector<int>& arr, int idx){
        int x=arr[idx];
        for(int i=idx;i>0;i--) arr[i]=arr[i-1];
        arr[0]=x;
    }
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> arr,result;
        for(int i=1;i<=m;i++) arr.push_back(i);
        for(int query:queries){
            int i;
            for(i=0;i<m;i++) if(arr[i]==query) break;
            result.push_back(i);
            permute(arr,i);
        }
        return result;
    }
};