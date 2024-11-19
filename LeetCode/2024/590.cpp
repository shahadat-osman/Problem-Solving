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
    void post_traverse(Node *node)
    {
        if (node == NULL)
            return;

        for (auto child : node->children)
        {
            post_traverse(child);
        }
        vct.push_back(node->val);
        return;
    }
    vector<int> postorder(Node *root)
    {
        post_traverse(root);
        return vct;
    }
};