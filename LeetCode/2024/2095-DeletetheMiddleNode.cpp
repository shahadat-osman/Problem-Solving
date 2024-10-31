// Shahadat Osman
// Date: 30-10-2024
#include <bits/stdc++.h>
using namespace std;

int main() {}

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
    ListNode *deleteMiddle(ListNode *head)
    {
        if (head->next == NULL)
            return NULL;
        int count = 0;
        ListNode *tmp = head;
        while (tmp != NULL)
        {
            count++;
            tmp = tmp->next;
        }
        count = count / 2;

        tmp = head;
        count--;
        while (count--)
        {
            tmp = tmp->next;
        }
        ListNode *deNode = tmp->next;
        tmp->next = tmp->next->next;
        delete deNode;
        return head;
    }
};