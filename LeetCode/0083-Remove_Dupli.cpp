// Shahadat Osman
// Date: 21-12-2023
#include <bits/stdc++.h>
using namespace std;

int main()
{
    

    return 0;
}

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    void remove_dupli(ListNode* node, int val) {
        while (node->next != NULL) {
            if (node->next->val == val) {
                ListNode* deleteNode = node->next;
                node->next = node->next->next;
                delete deleteNode;
            } else
                node = node->next;
        }
    }
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* tmp = head;
        while (tmp != NULL) {
            remove_dupli(tmp, tmp->val);
            tmp = tmp->next;
        }

        return head;
    }
};