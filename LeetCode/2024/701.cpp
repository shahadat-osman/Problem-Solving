// Shahadat Osman
// Date: 17-11-2024
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
    void recur(TreeNode *&node, int val)
    {
        if (node == NULL)
        {
            node = new TreeNode(val);
            return;
        }
        if (val < node->val)
        {
            if (node->left)
                recur(node->left, val);
            else
                node->left = new TreeNode(val);
        }
        else
        {
            if (node->right)
                recur(node->right, val);
            else
                node->right = new TreeNode(val);
        }
    }
    TreeNode *insertIntoBST(TreeNode *&root, int val)
    {
        recur(root, val);
        return root;
    }
};