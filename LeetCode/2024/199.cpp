// Shahadat Osman
// Date: 26-11-2024
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
    bool level[110] = {false};

    void bfs(TreeNode *root)
    {
        queue<pair<TreeNode *, int>> q;
        q.push({root, 0});
        while (!q.empty())
        {
            pair<TreeNode *, int> parent = q.front();
            q.pop();
            TreeNode *pr = parent.first;
            int lvl = parent.second;

            if (level[lvl] == false)
            {
                vct.push_back(pr->val);
            }
            level[lvl] = true;

            if (pr->right)
                q.push({pr->right, lvl + 1});
            if (pr->left)
                q.push({pr->left, lvl + 1});
        }
    }
    vector<int> rightSideView(TreeNode *root)
    {
        if (root)
            bfs(root);

        return vct;
    }
};