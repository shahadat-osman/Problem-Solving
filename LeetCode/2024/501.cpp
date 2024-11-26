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
    map<int, int> mp;

    void dfs(TreeNode *root)
    {
        if (root == NULL)
            return;

        mp[root->val]++;

        dfs(root->left);
        dfs(root->right);
    }
    vector<int> findMode(TreeNode *root)
    {
        vector<int> vct;

        dfs(root);

        int maxx = -1;
        for (auto it = mp.begin(); it != mp.end(); it++)
            if ((it->second) > maxx)
                maxx = it->second;

        for (auto it = mp.begin(); it != mp.end(); it++)
            if ((it->second) == maxx)
                vct.push_back(it->first);

        return vct;
    }
};