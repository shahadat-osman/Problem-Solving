// Shahadat Osman
// Date: 17-10-2024
#include <bits/stdc++.h>
using namespace std;
/*
 Definition for singly-linked list.
*/
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
    void swap_node(ListNode *&S_head, ListNode *&S_tail, ListNode *n1, ListNode *n2)
    {
        if (S_head == NULL)
        {
            S_head = n2;
            n2->next = n1;
            S_tail = n1;
            n1->next = NULL;
            return;
        }
        S_tail->next = n2;
        n2->next = n1;
        S_tail = n1;
        n1->next = NULL;
    }

    ListNode *swapPairs(ListNode *head)
    {
        ListNode *S_head = NULL, *S_tail = NULL;
        ListNode *node1 = head;
        if (head == NULL)
            return S_head;
        if (head->next == NULL)
        {
            return head;
        }
        while (true)
        {
            if (node1 == NULL)
                break;
            if (node1 != NULL && node1->next != NULL)
            {
                ListNode *tmp = node1->next->next;
                swap_node(S_head, S_tail, node1, node1->next);
                node1 = tmp;
            }
            else if (node1->next == NULL)
            {
                S_tail->next = node1;
                break;
            }
        }
        return S_head;
    }
};
int main()
{

    return 0;
}