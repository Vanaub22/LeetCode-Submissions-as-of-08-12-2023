// https://leetcode.com/problems/design-circular-deque

class MyCircularDeque {
public:
    int *arr,size,front,rear;
    MyCircularDeque(int k) {
        arr=new int[k];
        size=k;
        front=-1;
        rear=-1;
    }
    bool insertFront(int value) {
        if(isFull()) return false;
        if(front==-1 && rear==-1) front=rear=0;
        if(front==0) front=size-1;
        else front--;
        arr[front]=value;
        return true;
    }
    bool insertLast(int value) {
        if(isFull()) return false;
        if(front==-1 && rear==-1) front=rear=0;
        else rear=(rear+1)%size;
        arr[rear]=value;
        return true;
    }
    bool deleteFront() {
        if(isEmpty()) return false;
        if(front==rear) front=rear=-1;
        else front=(front+1)%size;
        return true;
    }
    bool deleteLast() {
        if(isEmpty()) return false;
        if(front==rear) front=rear=-1;
        else if(rear==0) rear=size-1;
        else rear--;
        return true;
    }
    int getFront() {
        return isEmpty()?-1:arr[front];
    }
    
    int getRear() {
        return isEmpty()?-1:arr[rear];
    }
    bool isEmpty() {
        return front==-1 && rear==-1;
    }
    bool isFull() {
        return (rear+1)%size==front;
    }
};
/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */