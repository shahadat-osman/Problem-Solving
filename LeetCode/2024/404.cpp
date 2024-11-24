// Shahadat Osman
// Date: 22-11-2024
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
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
                                                       right(right) {}
};

class Solution
{
public:
    int sum = 0;
    bool dfs(TreeNode *root)
    {
        if (root->left == NULL && root->right == NULL)
            return true;
        bool l, r;
        if (root->left)
            l = dfs(root->left);
        if (root->right)
            r = dfs(root->right);

        if (root->left && l)
            sum += root->left->val;
        return false;
    }
    int sumOfLeftLeaves(TreeNode *root)
    {
        dfs(root);

        return sum;
    }
};