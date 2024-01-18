// Shahadat Osman
// Date: 17-01-2024
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
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    int sum = 0;
    int recurs(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        int l = recurs(root->left);
        int r = recurs(root->right);

        sum += abs(l - r);

        return (l + r + root->val);
    }
    int findTilt(TreeNode *root)
    {
        recurs(root);

        return sum;
    }
};