// Shahadat Osman
// Date: 23-11-2024
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
    int maxDepth(Node *root)
    {
        if (root == NULL)
            return 0;

        int maxx = 0;
        for (auto child : root->children)
        {
            maxx = max(maxx, maxDepth(child));
        }
        return maxx + 1;
    }
};