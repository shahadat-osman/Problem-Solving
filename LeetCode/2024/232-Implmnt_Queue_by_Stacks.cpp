#include<bits/stdc++.h>
using namespace std;

class MyQueue {
public:
    stack<int>st;
    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        stack<int>new_ST;
        int last;
        while(!st.empty())
        {
            int k =st.top();
            st.pop();
            if(st.empty())
            {
                last=k;
                break;
            }
            new_ST.push(k);
        }
        while(!new_ST.empty())
        {
            st.push(new_ST.top());
            new_ST.pop();
        }
        return last;
    }
    
    int peek() {
        stack<int>new_ST;
        int last;
        while(!st.empty())
        {
            int k =st.top();
            st.pop();
            if(st.empty())
            {
                last=k;
            }
            new_ST.push(k);
        }
        while(!new_ST.empty())
        {
            st.push(new_ST.top());
            new_ST.pop();
        }
        return last;
    }
    
    bool empty() {
        if(st.empty())
            return true;
        else
            return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */