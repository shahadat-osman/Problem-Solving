// Shahadat Osman
// Date: 09-01-2024
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (head == NULL)
            return head;

        ListNode* temp = head;

        while (temp != NULL) {
            if (head->val == val) {
                ListNode* deNode = head;
                head = head->next;
                temp = head;
            } else if (temp->next == NULL)
                break;
            else if (temp->next->val == val) {
                ListNode* deNode = temp->next;
                temp->next = temp->next->next;
                delete deNode;
            } else
                temp = temp->next;
        }
        return head;
    }
};

// * Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};