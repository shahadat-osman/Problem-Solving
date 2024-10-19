// Shahadat Osman
// Date: 18-10-2024
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
    int sz(ListNode *head)
    {
        int count = 0;
        while (head != NULL)
        {
            head = head->next;
            count++;
        }
        return count;
    }
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (head == NULL || head->next == NULL)
            return head;
        int len = sz(head);
        k = k % len;
        while (k--)
        {
            ListNode *tmp = head;

            while (tmp->next->next != NULL)
                tmp = tmp->next;

            tmp->next->next = head;
            head = tmp->next;
            tmp->next = NULL;
        }

        return head;
    }
};
int main()
{

    return 0;
}