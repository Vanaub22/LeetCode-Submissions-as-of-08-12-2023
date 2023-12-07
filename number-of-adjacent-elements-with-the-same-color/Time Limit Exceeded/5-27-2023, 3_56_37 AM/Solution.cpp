// https://leetcode.com/problems/number-of-adjacent-elements-with-the-same-color

class Solution {
public:
    int findAdjacent(vector<int>& x,int n){
        int eqAdj=0;
        for(int i=0;i<n-1;i++)
        if(x[i]==x[i+1] && x[i]!=0)
        eqAdj++;
        return(eqAdj);
    }
    vector<int> colorTheArray(int n, vector<vector<int>>& queries) {
        vector<int> x(n,0),adj_same;
        for(auto query:queries){
            x[query[0]]=query[1];
            adj_same.push_back(findAdjacent(x,n));
        }
        return(adj_same);
    }
};