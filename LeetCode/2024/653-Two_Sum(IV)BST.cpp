// Shahadat Osman
// Date: 19-01-2024
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
    TreeNode *mainRoot;
    TreeNode *curRoot;
    bool recur(TreeNode *root, int kx)
    {
        if (root == NULL)
            return false;
        if (root != curRoot && root->val == kx)
            return true;
        if (kx < root->val)
            return recur(root->left, kx);
        else
            return recur(root->right, kx);
    }
    bool traverse(TreeNode *&root, int k)
    {
        queue<TreeNode *> q;

        if (root)
            q.push(root);

        while (!q.empty())
        {
            TreeNode *Pr = q.front();
            q.pop();

            curRoot = Pr;
            int kx = k - Pr->val;
            if (recur(mainRoot, kx))
                return true;

            if (Pr->left)
                q.push(Pr->left);
            if (Pr->right)
                q.push(Pr->right);
        }
        return false;
    }
    bool findTarget(TreeNode *root, int k)
    {
        mainRoot = root;

        return (traverse(root, k));
    }
};