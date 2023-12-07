// https://leetcode.com/problems/validate-binary-tree-nodes

class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        int parent[n],root_count=0,node=0;
        memset(parent,-1,sizeof(parent));
        // Valid Nodes can have only 1 Parent
        for(int i=0;i<n;i++) {
            if(leftChild[i]!=-1) {
                if(parent[leftChild[i]]!=-1 || parent[i]==leftChild[i]) return false;
                else parent[leftChild[i]]=i;
            }
            if(rightChild[i]!=-1) {
                if(parent[rightChild[i]]!=-1 || parent[i]==rightChild[i]) return false;
                else parent[rightChild[i]]=i;
            }
        }
        // Number of Nodes with No Parent, i.e., Root Node, should only be 1 
        for(int i=0;i<n;i++) if(parent[i]==-1) root_count++;
        if(root_count!=1) return false;
        // Checking for Existence of Loops
        while(parent[node]!=0) {
            if(parent[node]==-1) return true;
            node=parent[node];
        }
        return false;
    }
};