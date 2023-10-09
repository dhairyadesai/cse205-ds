class MyStack {
public:

    queue <int> s1;
    
    MyStack() {
        
    }
    
    void push(int x) {
        s1.push(x);
        
    }
    
    int pop() {
        
        int s = s1.size()-1;
        while(s--){
            s1.push(s1.front());
            s1.pop();

        }
        int x= s1.front();
        s1.pop();
        return x;

        
        
    }
    
    int top() {
        return s1.back();
        
    }
    
    bool empty() {
        return s1.empty();
        
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