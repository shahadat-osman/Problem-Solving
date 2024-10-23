// Shahadat Osman
// Date: 23-10-2024
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
    vector<int> nodesBetweenCriticalPoints(ListNode *head)
    {
        vector<int> vct(2, -1);

        if (head->next->next == NULL)
            return vct;

        ListNode *tmp = head->next, *prv, *nxt;

        prv = head;
        nxt = tmp->next;

        vector<int> min_max;
        int count = 0;

        while (nxt != NULL)
        {
            count++;

            if ((tmp->val > prv->val && tmp->val > nxt->val) ||
                (tmp->val < prv->val && tmp->val < nxt->val))
                min_max.push_back(count);

            prv = prv->next;
            tmp = tmp->next;
            nxt = nxt->next;
        }

        int sz = min_max.size();
        if (min_max.empty() || (sz == 1))
            return vct;

        int first = INT_MAX;
        for (int i = 0; i < sz - 1; i++)
        {
            if (abs(min_max[i] - min_max[i + 1]) < first)
                first = abs(min_max[i] - min_max[i + 1]);
        }
        int second = min_max.back() - min_max.front();

        vct = {first, second};

        return vct;
    }
};