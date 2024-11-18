// Shahadat Osman
// Date: 16-11-2024
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
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
                                                       right(right) {}
};

class Solution
{
public:
    bool recur(TreeNode *node, long long l, long long r)
    {
        if (node == NULL)
            return true;

        if (!(node->val > l && node->val < r))
            return false;

        bool left = recur(node->left, l, node->val);
        bool right = recur(node->right, node->val, r);

        return left && right;
    }
    bool isValidBST(TreeNode *root)
    {
        long long l = LLONG_MIN, r = LLONG_MAX;

        return recur(root, l, r);
    }
};