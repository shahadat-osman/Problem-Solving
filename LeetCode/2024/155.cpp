// Shahadat Osman
// Date: 09-11-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}
class MinStack
{
public:
    list<int> lst;
    stack<int> stk;

    MinStack()
    {
    }

    void push(int val)
    {
        if (stk.empty())
            stk.push(val);
        else if (val <= stk.top())
            stk.push(val);

        lst.push_back(val);
    }

    void pop()
    {
        if (stk.top() == lst.back())
            stk.pop();
        lst.pop_back();
    }

    int top()
    {
        return lst.back();
    }

    int getMin()
    {
        return stk.top();
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