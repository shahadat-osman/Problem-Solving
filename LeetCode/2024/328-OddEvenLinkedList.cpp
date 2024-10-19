// Shahadat Osman
// Date: 19-10-2024
#include <bits/stdc++.h>
using namespace std;

int main() {}

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
    void input(ListNode *&head, ListNode *&tail, int val)
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
    ListNode *oddEvenList(ListNode *head)
    {
        if (head == NULL)
            return head;

        ListNode *even = NULL, *etail = NULL, *odd = NULL, *otail = NULL;
        bool flag = 0;

        while (head != NULL)
        {
            if (flag == 0)
            {
                input(even, etail, head->val);
                flag = 1;
            }
            else if (flag == 1)
            {
                input(odd, otail, head->val);
                flag = 0;
            }
            head = head->next;
        }

        etail->next = odd;

        return even;
    }
};