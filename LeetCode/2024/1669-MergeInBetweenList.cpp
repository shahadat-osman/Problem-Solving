// Shahadat Osman
// Date: 22-10-2024
#include <bits/stdc++.h>
using namespace std;

int main() {}

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
    ListNode *mergeInBetween(ListNode *list1, int a, int b, ListNode *list2)
    {
        ListNode *tmp1 = list1, *start;
        for (int i = 0; i <= b; i++)
        {
            if (i == (a - 1))
                start = tmp1;
            tmp1 = tmp1->next;
        }
        start->next = list2;

        while (start->next != NULL)
            start = start->next;

        start->next = tmp1;

        return list1;
    }
};