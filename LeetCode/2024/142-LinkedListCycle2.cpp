// Shahadat Osman
// Date: 23-10-2024
#include <bits/stdc++.h>
using namespace std;

int main() {}

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
    ListNode *detectCycle(ListNode *head)
    {
        ListNode *slow = head, *fast = head, *cycle;
        bool flag = false;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            ListNode *tmp = head;
            if (head->next == head)
                return head;
            while (true)
            {
                ListNode *cur = head;
                while (true)
                {
                    if (cur == tmp)
                    {
                        if (cur == tmp->next)
                            return cur;
                        break;
                    }
                    if (cur == tmp->next)
                    {
                        cycle = cur;
                        return cycle;
                    }
                    cur = cur->next;
                }
                tmp = tmp->next;
            }
        }

        return NULL;
    }
};