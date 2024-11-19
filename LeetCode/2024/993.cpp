// Shahadat Osman
// Date: 19-11-2024
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
    vector<pair<TreeNode *, int>> v;
    bool koder(TreeNode *root, int x, int y)
    {
        queue<pair<TreeNode *, int>> q;
        q.push({root, 0});
        while (!q.empty())
        {
            pair<TreeNode *, int> pr = q.front();
            q.pop();
            TreeNode *node = pr.first;
            int lvl = pr.second;

            if (node->left && node->right)
            {
                if ((node->left->val == x) && (node->right->val == y))
                    return false;
                else if ((node->left->val == y) && (node->right->val == x))
                    return false;
            }

            if (node->left)
            {
                if (node->left->val == x || node->left->val == y)
                    v.push_back({node, lvl});

                q.push({node->left, lvl + 1});
            }
            if (node->right)
            {
                if (node->right->val == x || node->right->val == y)
                    v.push_back({node, lvl});

                q.push({node->right, lvl + 1});
            }
        }
        if (v.size() == 1)
            return false;
        else if (v[0].first != v[1].first && v[0].second == v[1].second)
            return true;
        else
            return false;
    }
    bool isCousins(TreeNode *root, int x, int y)
    {
        return koder(root, x, y);
    }
};