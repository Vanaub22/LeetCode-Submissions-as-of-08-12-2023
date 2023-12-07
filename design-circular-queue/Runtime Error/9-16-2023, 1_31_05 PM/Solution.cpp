// https://leetcode.com/problems/design-circular-queue

class MyCircularQueue {
public:
    int *q,n,front,rear,size;
    MyCircularQueue(int k) {
        n=k;
        front=rear=-1;
        size=0;
        q=new int[n];
    }
    bool enQueue(int value) {
        if(front==-1 && rear==-1){
            front=rear=0;
            q[rear]=value;
            size++;
            return true;
        }
        else if((rear+1)%n!=front){
            rear=(rear+1)%n;
            q[rear]=value;
            size++;
            return true;
        }
        else return false;
    }
    bool deQueue() {
        if(front==-1) return false;
        else if(front==rear){
            front=rear=-1;
        }
        else front=(front+1)%size;
        return true;
    }
    int Front() {
        return isEmpty()?-1:q[front];
    }
    int Rear() {
        return isEmpty()?-1:q[rear];
    }
    bool isEmpty() {
        return front==-1 && rear==-1;
    }
    bool isFull() {
        return (rear+1)%size==front;
    }
};
/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */