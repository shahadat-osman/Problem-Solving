// Shahadat Osman
// Date: 10-01-2024
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int size(ListNode *head)
    {
        ListNode *temp = head;
        int sz = 0;
        while (temp != NULL)
        {
            sz++;
            temp = temp->next;
        }
        return sz;
    }

    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        int sz = size(head);
        int pos = sz - n;

        if (pos == 0)
        {
            ListNode *deNode = head;
            head = head->next;
            return head;
        }
        ListNode *temp = head;
        for (int i = 1; i < pos; i++)
        {
            temp = temp->next;
        }
        ListNode *deNode = temp->next;
        temp->next = temp->next->next;
        delete deNode;

        return head;
    }
};

//  * Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
