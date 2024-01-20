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
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    TreeNode *mainRoot, *curRoot;
    int mini = INT_MAX;
    void recur(TreeNode *root)
    {
        if (root == NULL)
            return;
        if (root != curRoot)
        {
            int diff = abs(root->val - curRoot->val);
            if (diff < mini)
                mini = diff;
        }
        recur(root->left);
        recur(root->right);
    }
    void traverse(TreeNode *&root)
    {
        queue<TreeNode *> q;

        if (root)
            q.push(root);

        while (!q.empty())
        {
            TreeNode *Pr = q.front();
            q.pop();

            curRoot = Pr;
            recur(mainRoot);

            if (Pr->left)
                q.push(Pr->left);
            if (Pr->right)
                q.push(Pr->right);
        }
    }
    int getMinimumDifference(TreeNode *root)
    {
        mainRoot = root;
        traverse(root);
        return mini;
    }
};