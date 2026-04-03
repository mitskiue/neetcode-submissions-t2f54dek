class MinStack {
private:
    stack<int> minStack;
    stack<int> myStack;
public:
    MinStack() {
    }
    
    void push(int val) {
        myStack.push(val);

        if (minStack.empty() || val <= minStack.top()) {
            minStack.push(val);
        }
        else {
            minStack.push(minStack.top());
        }
        
    }
    
    void pop() {
        myStack.pop();
        minStack.pop();
    }
    
    int top() {
        return myStack.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};
