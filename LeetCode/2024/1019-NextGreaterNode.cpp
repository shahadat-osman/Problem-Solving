// Shahadat Osman
// Date: 21-10-2024
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
    vector<int> nextLargerNodes(ListNode *head)
    {
        vector<int> vct;
        while (head != NULL)
        {
            ListNode *tmp = head->next;
            while (tmp != NULL)
            {
                if (tmp->val > head->val)
                {
                    vct.push_back(tmp->val);
                    break;
                }
                tmp = tmp->next;
            }
            if (tmp == NULL)
                vct.push_back(0);
            head = head->next;
        }

        return vct;
    }
};