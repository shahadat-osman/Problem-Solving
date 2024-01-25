// Shahadat Osman
// Date: 22-01-2024
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
    vector<int> vect;
    void recur(TreeNode *root)
    {
        if (root == NULL)
            return;

        recur(root->left);
        vect.push_back(root->val);
        recur(root->right);
    }
    vector<int> inorderTraversal(TreeNode *root)
    {
        recur(root);

        return vect;
    }
};