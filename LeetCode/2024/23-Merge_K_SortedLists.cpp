// Shahadat Osman
// Date: 16-10-2024
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
    void list_sort(ListNode *&head)
    {
        ListNode *itmp = head;

        while (itmp != NULL)
        {
            ListNode *jtmp = itmp->next;
            while (jtmp != NULL)
            {
                if (itmp->val > jtmp->val)
                    swap(itmp->val, jtmp->val);

                jtmp = jtmp->next;
            }
            itmp = itmp->next;
        }
    }
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        ListNode *final = NULL, *tail = NULL;

        for (int i = 0; i < lists.size(); i++)
        {
            ListNode *tmp = lists[i];
            while (tmp != NULL)
            {
                insert_tail(final, tail, tmp->val);
                tmp = tmp->next;
            }
        }
        list_sort(final);

        return final;
    }
};