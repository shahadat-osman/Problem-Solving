// Shahadat Osman
// Date: 07-01-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    void deleteNode(ListNode *node)
    {
        node->val = node->next->val;
        ListNode *deleteNode = node->next;
        node->next = node->next->next;

        delete deleteNode;
    }
};