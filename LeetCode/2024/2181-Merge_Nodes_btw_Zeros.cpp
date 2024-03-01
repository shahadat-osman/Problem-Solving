// Shahadat Osman
// Date: 08-02-2024
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
    ListNode *mergeNodes(ListNode *head)
    {
        ListNode *tmp = head;
        while (true)
        {
            if (tmp->next->next == NULL)
            {
                ListNode *node = tmp->next;
                tmp->next = NULL;
                delete node;
                break;
            }
            else
            {
                if (tmp->next->val == 0)
                    tmp = tmp->next;
                else
                {
                    ListNode *deleteNode = tmp->next;
                    tmp->val += tmp->next->val;
                    tmp->next = tmp->next->next;
                    delete deleteNode;
                }
            }
        }

        return head;
    }
};