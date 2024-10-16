#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    void node_input(ListNode *&head, int value)
    {
        ListNode *newNode = new ListNode(value);
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        ListNode *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *final = NULL;

        ListNode *t1 = list1;
        ListNode *t2 = list2;

        while (true)
        {
            if (t1 == NULL && t2 == NULL)
                break;

            if (t1 == NULL)
            {
                node_input(final, t2->val);
                t2 = t2->next;
            }
            else if (t2 == NULL)
            {
                node_input(final, t1->val);
                t1 = t1->next;
            }
            else if (t1->val <= t2->val)
            {
                node_input(final, t1->val);
                t1 = t1->next;
            }
            else if (t2->val < t1->val)
            {
                node_input(final, t2->val);
                t2 = t2->next;
            }
        }

        return final;
    }
};