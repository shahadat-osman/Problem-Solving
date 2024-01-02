// Shahadat Osman
// Date: 02-01-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}

//  * Definition for singly-linked list.
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
    void reverse(ListNode *&head, ListNode *node)
    {
        if (node->next == NULL)
        {
            head = node;
            return;
        }
        reverse(head, node->next);
        node->next->next = node;
        node->next = NULL;
    }
    ListNode *reverseList(ListNode *head)
    {
        if (head == NULL)
            return head;

        ListNode *start = head, *cur = head;
        reverse(start, cur);

        return start;
    }
};