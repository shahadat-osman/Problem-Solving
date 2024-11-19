// Shahadat Osman
// Date: 18-11-2024
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
    vector<int> vct;
    void koder(TreeNode *root)
    {
        if (root == NULL)
            return;

        vct.push_back(root->val);
        koder(root->left);
        koder(root->right);

        return;
    }
    vector<int> preorderTraversal(TreeNode *root)
    {
        koder(root);
        return vct;
    }
};