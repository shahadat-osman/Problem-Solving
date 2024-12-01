// Shahadat Osman
// Date: 30-11-2024
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
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
                                                       right(right) {}
};

class Solution
{
public:
    int sum = 0;
    vector<vector<int>> vct;
    vector<int> v;
    bool dfs(TreeNode *root, int t)
    {
        if (root == NULL)
            return true;

        sum += root->val;
        v.push_back(root->val);

        bool l = dfs(root->left, t);
        bool r = dfs(root->right, t);

        if ((l == true && r == true) && sum == t)
        {
            vct.push_back(v);
        }
        sum -= root->val;
        v.pop_back();

        return false;
    }
    vector<vector<int>> pathSum(TreeNode *root, int targetSum)
    {
        dfs(root, targetSum);

        return vct;
    }
};