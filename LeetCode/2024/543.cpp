// Shahadat Osman
// Date: 28-11-2024
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
    int mx = 0;
    int maxHeight(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        int l = maxHeight(root->left);
        int r = maxHeight(root->right);

        int d = l + r;

        if (d > mx)
            mx = d;

        return max(l, r) + 1;
    }
    int diameterOfBinaryTree(TreeNode *root)
    {
        maxHeight(root);
        return mx;
    }
};