// Shahadat Osman
// Date: 20-01-2024
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
    queue<TreeNode *> q;
    void Recur(TreeNode *root)
    {
        if (root == NULL)
            return;

        Recur(root->left);

        q.push(root);

        Recur(root->right);
    }
    TreeNode *increasingBST(TreeNode *root)
    {
        Recur(root);

        TreeNode *rootNode = q.front();
        rootNode->left = NULL;
        rootNode->right = NULL;
        q.pop();

        TreeNode *temp = rootNode;
        while (!q.empty())
        {
            temp->right = q.front();
            temp->left = NULL;
            q.pop();
            temp = temp->right;
            temp->right = NULL;
            temp->left = NULL;
        }

        return rootNode;
    }
};