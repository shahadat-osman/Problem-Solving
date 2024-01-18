// Shahadat Osman
// Date: 16-01-2024
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
    vector<int> v;
    void leafNodes(TreeNode *root)
    {
        if (root == NULL)
            return;

        leafNodes(root->left);
        leafNodes(root->right);

        if (root->left == NULL && root->right == NULL)
            v.push_back(root->val);
    }
    bool leafSimilar(TreeNode *root1, TreeNode *root2)
    {
        vector<int> v1, v2;
        leafNodes(root1);
        v1 = v;

        v.clear();

        leafNodes(root2);
        v2 = v;

        if (v1 == v2)
            return true;
        else
            return false;
    }
};