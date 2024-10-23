// Shahadat Osman
// Date: 21-10-2024
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
    int sum = 0, count;
    void recur(ListNode *node)
    {
        if (node == NULL)
        {
            count = 0;
            return;
        }

        recur(node->next);

        int r = pow(2, count) * node->val;
        sum += r;
        count++;
        return;
    }
    int getDecimalValue(ListNode *head)
    {
        recur(head);

        return sum;
    }
};