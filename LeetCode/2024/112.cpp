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
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    int sum = 0;
    bool path = false;
    bool dfs(TreeNode *root, int t)
    {
        if (root == NULL)
            return true;

        if (path == false)
            sum += root->val;
        bool l = dfs(root->left, t);
        bool r = dfs(root->right, t);

        if ((l == true && r == true) && sum == t)
        {
            path = true;
        }
        else
            sum -= root->val;

        return false;
    }
    bool hasPathSum(TreeNode *root, int targetSum)
    {
        dfs(root, targetSum);

        return path;
    }
};