#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void insert_tail(ListNode*& head, ListNode*& tail, int value) {
        ListNode* newNode = new ListNode(value);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
    void reverse(ListNode*& h, ListNode* cur) {
        if (cur->next == NULL) {
            h = cur;
            return;
        }
        reverse(h, cur->next);
        cur->next->next = cur;
        cur->next = NULL;
    }
    bool isPalindrome(ListNode* head) {
        ListNode *copy_head = NULL, *copy_tail = NULL, *temp = head, *temp2;

        while (temp != NULL) {
            insert_tail(copy_head, copy_tail, temp->val);
            temp = temp->next;
        }

        reverse(copy_head, copy_head);

        temp = head;
        temp2 = copy_head;
        while (temp != NULL) {
            if (temp->val != temp2->val)
                return false;

            temp = temp->next;
            temp2 = temp2->next;
        }
        return true;
    }
};


//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
