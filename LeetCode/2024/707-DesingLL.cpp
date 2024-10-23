// Shahadat Osman
// Date: 23-10-2024
#include <bits/stdc++.h>
using namespace std;

int main() {}

class Node
{
public:
    int value;
    Node *next = NULL;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

class MyLinkedList
{
public:
    Node *head, *tail;
    int sz;

    MyLinkedList()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    int get(int index)
    {
        if (index >= sz)
            return -1;
        Node *tmp = head;
        for (int i = 0; i < index; i++)
        {
            tmp = tmp->next;
        }
        return tmp->value;
    }

    void addAtHead(int val)
    {
        sz++;
        Node *node = new Node(val);
        if (head == NULL)
        {
            head = node;
            tail = node;
            return;
        }
        node->next = head;
        head = node;
    }

    void addAtTail(int val)
    {
        Node *node = new Node(val);
        if (head == NULL)
        {
            head = node;
            tail = node;
            sz++;
            return;
        }
        Node *tmp = head;
        for (int i = 0; i < sz - 1; i++)
        {
            tmp = tmp->next;
        }
        tmp->next = node;

        sz++;
    }

    void addAtIndex(int index, int val)
    {
        if (index > sz)
            return;
        if (index == 0)
        {
            addAtHead(val);
            return;
        }
        sz++;
        Node *node = new Node(val);
        Node *tmp = head;
        for (int i = 0; i < index - 1; i++)
        {
            tmp = tmp->next;
        }
        node->next = tmp->next;
        tmp->next = node;
    }

    void deleteAtIndex(int index)
    {
        if (index >= sz)
            return;
        sz--;
        Node *tmp = head;
        if (index == 0)
        {
            Node *deleteNode = head;
            head = head->next;
            delete deleteNode;
            return;
        }
        for (int i = 0; i < index - 1; i++)
        {
            tmp = tmp->next;
        }
        Node *deleteNode = tmp->next;
        tmp->next = tmp->next->next;

        delete deleteNode;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */