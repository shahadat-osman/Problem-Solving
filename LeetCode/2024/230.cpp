// Shahadat Osman
// Date: 28-11-2024
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
    int count = 0;
    int ans = 0;
    int dfs(TreeNode *root, int k)
    {
        if (root == NULL)
            return 0;

        int l = kthSmallest(root->left, k);
        count++;
        if (count == k)
            ans = root->val;
        int r = kthSmallest(root->right, k);

        return count;
    }
    int kthSmallest(TreeNode *root, int k)
    {
        dfs(root, k);
        return ans;
    }
};