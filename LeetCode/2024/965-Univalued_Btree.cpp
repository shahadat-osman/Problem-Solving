// Shahadat Osman
// Date: 14-01-2024
#include <bits/stdc++.h>
using namespace std;

//  * Definition for a binary tree node.
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
    bool check(TreeNode *root, int value)
    {
        if (root == NULL)
            return true;

        if (root->val != value)
            return false;

        bool l, r;
        l = check(root->left, value);
        r = check(root->right, value);

        return (l && r);
    }

    bool isUnivalTree(TreeNode *root)
    {
        int x = root->val;
        bool ans = check(root, x);

        return ans;
    }
};