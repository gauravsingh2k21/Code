/*class MinStack {
    vector<int> stk;
public:
    MinStack() {
        
    }
    
    void push(int val) {
       stk.push_back(val);
    }
    
    void pop() {
        stk.pop_back();
    }
    
    int top() {
        int top = stk.back();
        return top;
    }
    
    int getMin() {
        return *min_element(stk.begin(),stk.end());
    }
};*/





/*class MinStack {
    vector<int> stk;
     int minval = INT_MAX;
public:
    MinStack() {
       
    }
    
    void push(int val) 
    {
       stk.push_back(val);
       if(val<minval)
           minval = val;
    }
    
    void pop() 
    {
        int top = stk.back();
        stk.pop_back();
        
        if(top==minval)
        {
           if(stk.empty())
               minval = INT_MAX;
           else     
               minval = *min_element(stk.begin(),stk.end()); 
        }
    }
    
    int top() {
        int top = stk.back();
        return top;
    }
    
    int getMin() {
        return minval;
    }
};
*/



class MinStack {
    vector<int> stk;
    vector<int> minelm;
public:
    MinStack() {
       
    }
    
    void push(int val) 
    {
       if(minelm.empty()||minelm.back()>val)
           minelm.push_back(val);
       else 
           minelm.push_back(minelm.back());
       stk.push_back(val); 
    }
    
    void pop() 
    {
        stk.pop_back();
        minelm.pop_back();
    }
    
    int top() {
        int top = stk.back();
        return top;
    }
    
    int getMin() {
        int top = minelm.back();
        return top;
    }
};





/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */