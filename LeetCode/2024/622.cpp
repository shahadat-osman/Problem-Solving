// Shahadat Osman
// Date: 10-11-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{
    return 0;
}

class MyCircularQueue
{
public:
    list<int> lst;
    int sz;
    MyCircularQueue(int k)
    {
        sz = k;
    }

    bool enQueue(int value)
    {
        if (lst.size() < sz)
        {
            lst.push_back(value);
            return true;
        }

        return false;
    }

    bool deQueue()
    {
        if (lst.size() != 0)
        {
            lst.pop_front();
            return true;
        }
        return false;
    }

    int Front()
    {
        if (lst.size())
            return lst.front();
        return -1;
    }

    int Rear()
    {
        if (lst.size())
            return lst.back();
        return -1;
    }

    bool isEmpty()
    {
        if (lst.size())
            return false;
        return true;
    }

    bool isFull()
    {
        if (lst.size() == sz)
            return true;
        return false;
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