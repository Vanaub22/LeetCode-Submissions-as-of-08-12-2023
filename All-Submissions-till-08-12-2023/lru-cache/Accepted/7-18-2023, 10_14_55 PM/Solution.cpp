// https://leetcode.com/problems/lru-cache

class LRUCache {
public:
    struct Node{
        int key,val;
        Node *prev,*next;
    };
    Node *head=new Node;
    Node *tail=new Node;
    int capacity;
    unordered_map<int,Node*> addressMap;
    LRUCache(int capacity) {
        this->capacity=capacity;
        head->next=tail;
        head->prev=nullptr;
        tail->prev=head;   
        tail->next=nullptr;
        head->key=-1;
        head->val=-1;
        tail->key=-1;
        tail->val=-1;
    }
    void addNode(Node* newNode){
        Node* headNext=head->next;
        head->next=newNode;
        headNext->prev=newNode;
        newNode->prev=head;
        newNode->next=headNext; 
    }
    void deleteNode(Node* thisNode){
        Node* delPrev=thisNode->prev,*delNext=thisNode->next;
        delPrev->next=delNext;
        delNext->prev=delPrev;
    }
    int get(int k) {
        if(addressMap.find(k)==addressMap.end()) return -1;
        Node* thisNode=addressMap[k];
        addressMap.erase(k);
        deleteNode(thisNode);
        addNode(thisNode);
        addressMap[k]=head->next;
        return addressMap[k]->val;
    }
    void put(int k, int v) {
        if(addressMap.find(k)!=addressMap.end()){
            Node* thisNode=addressMap[k];
            addressMap.erase(k);
            deleteNode(thisNode);
        }
        if(addressMap.size()==capacity){
            addressMap.erase(tail->prev->key);
            deleteNode(tail->prev);
        }
        Node* newNode=new Node;
        newNode->key=k,newNode->val=v;
        addNode(newNode);
        addressMap[head->next->key]=head->next;        
    }
};
/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */