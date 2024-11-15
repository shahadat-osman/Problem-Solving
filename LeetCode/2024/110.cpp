// Shahadat Osman
// Date: 14-11-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}

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
    bool flag = true;
    int maxHeight(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        int l = maxHeight(root->left);
        int r = maxHeight(root->right);

        if (abs(l - r) > 1)
            flag = false;
        return max(l, r) + 1;
    }
    bool isBalanced(TreeNode *root)
    {
        maxHeight(root);

        return flag;
    }
};