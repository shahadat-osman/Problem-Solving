// Shahadat Osman
// Date: 16-10-2024
#include <bits/stdc++.h>
using namespace std;

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
    void insert_tail(ListNode *&head, ListNode *&tail, int val)
    {
        ListNode *newNode = new ListNode(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *head = NULL, *tail = NULL;

        int f_digit = 0, s_digit = 0, sum = 0;
        while (true)
        {
            if (l1 == NULL && l2 == NULL)
                break;

            sum = 0;
            if (s_digit > 0)
            {
                sum += s_digit;
                s_digit = 0;
            }

            if (l1 != NULL)
                sum += l1->val;
            if (l2 != NULL)
                sum += l2->val;

            if (sum < 10)
                insert_tail(head, tail, sum);

            if (sum > 9)
            {
                f_digit = sum % 10;
                s_digit = sum / 10;
                insert_tail(head, tail, f_digit);
            }
            if (l1 != NULL)
                l1 = l1->next;
            if (l2 != NULL)
                l2 = l2->next;
        }
        if (s_digit > 0)
            insert_tail(head, tail, s_digit);

        return head;
    }
};