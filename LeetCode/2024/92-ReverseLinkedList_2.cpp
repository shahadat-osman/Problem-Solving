// Shahadat Osman
// Date: 24-10-2024
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
    ListNode *reverseBetween(ListNode *head, int left, int right)
    {
        ListNode *dummy = new ListNode(0);
        dummy->next = head;

        // 1- reach node at position "left"
        ListNode *l_prev = dummy, *cur = head;
        for (int i = 0; i < left - 1; i++)
        {
            l_prev = cur;
            cur = cur->next;
        }

        // Now cur = 'left', l_Prev = 'node before left'
        // 2- reverse from left to right
        ListNode *prev = NULL, *tmpNext;
        for (int i = 0; i < (right - left) + 1; i++)
        {
            tmpNext = cur->next;
            cur->next = prev;
            prev = cur;
            cur = tmpNext;
        }

        // Update and merge linkedlist
        l_prev->next->next = cur;
        l_prev->next = prev;

        return dummy->next;
    }
};