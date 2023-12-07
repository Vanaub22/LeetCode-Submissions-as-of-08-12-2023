// https://leetcode.com/problems/construct-quad-tree

/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;
    
    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
*/
class Solution {
public:
    Node* construct(vector<vector<int>>& grid){
        return recursive_construct(grid,0,0,grid.size(),grid[0].size());
    }
    Node* recursive_construct(vector<vector<int>>& grid, int r, int c, int m, int n) {
        int init_val=grid[r][c];
        Node* root=new Node(init_val==1,true);
        for(int i=r;i<m;i++) for(int j=c;j<n;j++) if(grid[i][j]!=init_val){
            root->isLeaf=false;
            break;
        }
        if(!root->isLeaf){
            root->topLeft=recursive_construct(grid,r,c,r+(m-r)/2,c+(n-c)/2);
            root->topRight=recursive_construct(grid,r,c+(n-c)/2,r+(m-r)/2,n);
            root->bottomLeft=recursive_construct(grid,r+(m-r)/2,c,m,c+(n-c)/2);
            root->bottomRight=recursive_construct(grid,r+(m-r)/2,n/2,m,n);
        }
        return root;
    }
};