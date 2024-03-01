// Shahadat Osman
// Date: 04-02-2024
#include <bits/stdc++.h>
using namespace std;

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
    int size_is(ListNode *head)
    {
        int sz = 0;
        while (head != NULL)
        {
            sz++;
            head = head->next;
        }
        return sz;
    }
    ListNode *solution(ListNode *&head, int sz, int k)
    {
        if ((sz - k + 1) == k)
            return head;
        int rev = sz - k + 1;
        int tmp;
        ListNode *tmpNode = head, *k_temp, *rev_temp;
        for (int i = 1; i <= sz; i++)
        {

            if (i == k)
            {
                tmp = tmpNode->val;
                k_temp = tmpNode;
            }
            if (i == rev)
            {
                rev_temp = tmpNode;
            }
            tmpNode = tmpNode->next;
        }
        k_temp->val = rev_temp->val;
        rev_temp->val = tmp;

        return head;
    }
    ListNode *swapNodes(ListNode *head, int k)
    {
        int sz = size_is(head);

        return solution(head, sz, k);
    }
};