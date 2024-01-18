// Shahadat Osman
// Date: 18-01-2024
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
    void recur(TreeNode *root, int low, int high)
    {
        if (root == NULL)
            return;
        if (root->val >= low && root->val <= high)
            sum += root->val;

        if (low < root->val)
            recur(root->left, low, high);

        if (high > root->val)
            recur(root->right, low, high);
    }
    int rangeSumBST(TreeNode *root, int low, int high)
    {
        recur(root, low, high);

        return sum;
    }
};