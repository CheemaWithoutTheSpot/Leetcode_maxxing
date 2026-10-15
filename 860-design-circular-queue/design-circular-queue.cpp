class MyCircularQueue {
    vector<int> q;
    int size;
    int rear;
    int front;
public:
    MyCircularQueue(int k) {
        size = k;
        q.resize(k);
        front =-1;
        rear = -1;
    }
    bool isEmpty()
    {
        return front == -1;
    }
    bool isFull()
    {
        return (rear+1)%size == front;
    }
    bool enQueue(int value) {
        if(isFull()) return 0;
        rear = (rear +1) % size;
        q[rear] = value;
        if(isEmpty())   front =0;
        return 1;
    }
    
    bool deQueue() {
        if(isEmpty()) return 0;
        if(front == rear)
        {
            front =-1;
            rear = -1;
            return 1;
        }
        front = (front +1) % size;
        return 1;
    }
    
    int Front() {
        if(front == -1) return -1;

        return q[front];
    }
    
    int Rear() {
        if(rear == -1) return -1;
        return q[rear];
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