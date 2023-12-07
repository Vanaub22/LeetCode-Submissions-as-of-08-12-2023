// https://leetcode.com/problems/copy-list-with-random-pointer

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
class Solution {
public: 
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*> nodeMapping;
        Node* iter=head;
        while(iter){
            nodeMapping[iter]=new Node(iter->val);
            iter=iter->next;
        }
        iter=head;
        while(iter){
            nodeMapping[iter]->next=nodeMapping[iter->next];
            nodeMapping[iter]->random=nodeMapping[iter->random];
            iter=iter->next;
        }
        return nodeMapping[head];
    }
};