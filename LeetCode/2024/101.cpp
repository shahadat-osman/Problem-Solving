// Shahadat Osman
// Date: 20-11-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}

// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    bool koder(TreeNode *node1, TreeNode *node2)
    {
        if (node1 == NULL && node2 == NULL)
            return true;

        if (node1 == NULL || node2 == NULL)
            return false;

        if (node1->val != node2->val)
            return false;

        bool l, r;
        if (node1->val == node2->val)
        {
            l = koder(node1->left, node2->right);
            r = koder(node1->right, node2->left);
        }
        return l && r;
    }
    bool isSymmetric(TreeNode *root)
    {
        return koder(root->left, root->right);
    }
};