// Shahadat Osman
// Date: 18-01-2024
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    TreeNode *recur(vector<int> v, int l, int r)
    {
        if (l > r)
            return NULL;

        int mid = (l + r) / 2;

        TreeNode *root = new TreeNode(v[mid]);

        root->left = recur(v, l, mid - 1);
        root->right = recur(v, mid + 1, r);

        return root;
    }
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        int l = 0;
        int r = nums.size() - 1;

        return recur(nums, l, r);
    }
};

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