// Shahadat Osman
// Date: 18-11-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{
    return 0;
}

// Definition for a Node.
class Node
{
public:
    int val;
    vector<Node *> children;

    Node() {}

    Node(int _val)
    {
        val = _val;
    }

    Node(int _val, vector<Node *> _children)
    {
        val = _val;
        children = _children;
    }
};

class Solution
{
public:
    vector<int> vct;
    void pre_traverse(Node *node)
    {
        if (node == NULL)
            return;
        vct.push_back(node->val);
        for (auto child : node->children)
        {
            pre_traverse(child);
        }
        return;
    }
    vector<int> preorder(Node *root)
    {
        pre_traverse(root);
        return vct;
    }
};