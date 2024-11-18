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
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    vector<vector<int>> levelOrderBottom(TreeNode *root)
    {
        vector<vector<int>> vct;
        if (root)
        {
            queue<pair<TreeNode *, int>> q;
            q.push({root, 1});

            int pivot = 1;
            vector<int> sub_vct;
            while (!q.empty())
            {
                pair<TreeNode *, int> pr = q.front();
                q.pop();
                TreeNode *p = pr.first;
                int lvl = pr.second;

                if (lvl == pivot)
                {
                    sub_vct.push_back(p->val);
                }
                else if (lvl != pivot)
                {
                    pivot = lvl;
                    vct.push_back(sub_vct);
                    sub_vct.clear();
                    sub_vct.push_back(p->val);
                }

                if (p->left)
                    q.push({p->left, lvl + 1});
                if (p->right)
                    q.push({p->right, lvl + 1});
            }
            if (!sub_vct.empty())
                vct.push_back(sub_vct);
        }
        reverse(vct.begin(), vct.end());
        return vct;
    }
};