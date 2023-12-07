// https://leetcode.com/problems/diagonal-traverse-ii

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> diagonalTraversal;
        // Sum->(Row,Value) Map to store entries in the form of tuples
        unordered_map<int,vector<pair<int,int>>> tuples;

        // Elements on the same diagonal will have same index sums (row index + column index)
        int m=mat.size();
        for(int i=0;i<m;i++) {
            auto row=mat[i];
            int n=row.size();
            // Same diagonal elements will have same index sums
            for(int j=0;j<n;j++) tuples[i+j].emplace_back(make_pair(i,mat[i][j]));
        }

        // For the diagonals starting in the 0th column (first column)
        for(int i=0;i<m;i++) {
            // Here index sum will be i since column = 0
            auto rowValPairs=tuples[i];
            // The ordering will be done in decreasing order of rows
            sort(rowValPairs.begin(),rowValPairs.end(),greater<pair<int,int>>());
            for(auto& it:rowValPairs) diagonalTraversal.emplace_back(it.second);
        }

        // For the diagonals starting exclusively in the (m - 1)th row (last row)
        int n=mat[m-1].size();
        for(int i=1;i<n;i++) {
            // Here index sum will be (m - 1 + i) since row = m - 1
            auto rowValPairs=tuples[m-1+i];
            sort(rowValPairs.begin(),rowValPairs.end(),greater<pair<int,int>>());
            for(auto& it:rowValPairs) diagonalTraversal.emplace_back(it.second);
        }

        return diagonalTraversal;

    }
};