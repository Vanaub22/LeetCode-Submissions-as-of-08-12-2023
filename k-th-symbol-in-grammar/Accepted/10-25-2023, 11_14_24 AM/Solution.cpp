// https://leetcode.com/problems/k-th-symbol-in-grammar

class Solution {
public:
    // Optimized Recursive Searching by Pruning the Binary tree to some extent
    int abstractDFS(int row, int pos, int node_val) {
        if(row==1) return node_val;
        row--;
        int node_count=pow(2,row);
        // Left SubTree
        if(pos<=node_count/2) return abstractDFS(row,pos,node_val?1:0);
        // Right SubTree
        return abstractDFS(row,pos-node_count/2,node_val?0:1);
    }
    // Space-optimized since we are not explicitly creating a Binary Tree
    int kthGrammar(int n, int k) {
        return abstractDFS(n,k,0);
    }
};