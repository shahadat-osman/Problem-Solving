// Shahadat Osman
// Date: 03-01-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{
    

    return 0;
}
class MyStack
{
public:
    queue<int> q;

    MyStack() {}

    void push(int x) 
    {
        q.push(x); 
    }

    int pop()
    {
        queue<int> nQ;

        int last_elmnt;
        while (!q.empty())
        {
            int k = q.front();
            q.pop();

            if (q.empty())
            {
                last_elmnt = k;
                break;
            }

            nQ.push(k);
        }
        q = nQ;

        return last_elmnt;
    }

    int top()
    {
        queue<int> nQ;
        int last_elmnt;

        while (!q.empty())
        {
            int k = q.front();
            q.pop();

            if (q.empty())
            {
                last_elmnt = k;
            }

            nQ.push(k);
        }
        q = nQ;
        
        return last_elmnt;
    }

    bool empty()
    {
        if (q.empty())
            return true;
        else
            return false;
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

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */