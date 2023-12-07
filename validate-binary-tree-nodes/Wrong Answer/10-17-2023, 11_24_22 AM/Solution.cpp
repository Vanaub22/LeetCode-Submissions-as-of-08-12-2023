// https://leetcode.com/problems/validate-binary-tree-nodes

class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        int parent[n],root_count=0;
        memset(parent,-1,sizeof(parent));
        // Valid Nodes can have only 1 Parent
        for(int i=0;i<n;i++) {
            if(leftChild[i]!=-1) {
                if(parent[leftChild[i]]!=-1) return false;
                else if(parent[i]==leftChild[i]) return false;
                parent[leftChild[i]]=i;
            }
            if(rightChild[i]!=-1) {
                if(parent[rightChild[i]]!=-1) return false;
                else if(parent[i]==rightChild[i]) return false;
                else parent[rightChild[i]]=i;
            }
        }
        // Number of Nodes with No Parent, i.e., Root Node, should only be 1 
        for(int i=0;i<n;i++) if(parent[i]==-1) root_count++;
        return root_count==1;

    }
};