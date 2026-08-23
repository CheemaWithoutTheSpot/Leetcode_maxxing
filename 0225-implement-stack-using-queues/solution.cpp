class MyStack {
        std::queue<int> q;
        std::queue<int> temp;
public:
    MyStack() {

    }
    
    void push(int x) {
        if(q.empty()) q.push(x);
        else
        {
            temp.push(x);
            while(!q.empty())
            {
                temp.push(q.front());
                q.pop();
            }
            while(!temp.empty())
            {
                q.push(temp.front());
                temp.pop();
            }

        }
    }
    
    int pop() {
        if(!q.empty()){
        int b = q.front();
        q.pop();
        return b;
        }
        return 0;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
