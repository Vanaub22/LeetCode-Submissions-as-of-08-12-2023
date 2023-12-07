// https://leetcode.com/problems/populating-next-right-pointers-in-each-node

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;
    Node() : val(0), left(NULL), right(NULL), next(NULL) {}
    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}
    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/
class Solution {
public:
    Node* connect(Node* root) {
        if(!root)
        return(root);
        queue<Node*> Q;
        Q.push(root);
        while(!Q.empty()){
            vector<Node*> level;
            int n=Q.size();
            for(int i=1;i<=n;i++){
                if(Q.front()->left)
                Q.push(Q.front()->left);
                if(Q.front()->right)
                Q.push(Q.front()->right);
                level.push_back(Q.front());
                Q.pop();
            }
            for(int i=1;i<level.size();i++){
                Node *prev=level[i-1],*curr=level[i];
                prev->next=curr;
            }
        }
        return(root);
    }
};