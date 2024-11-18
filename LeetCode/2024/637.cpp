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
    vector<double> averageOfLevels(TreeNode *root)
    {
        vector<double> vct;
        if (root)
        {
            queue<pair<TreeNode *, int>> q;
            q.push({root, 1});
            double sum = 0;
            int count = 0;
            int pivot = 1;
            while (!q.empty())
            {
                pair<TreeNode *, int> pr = q.front();
                q.pop();
                TreeNode *p = pr.first;
                int lvl = pr.second;

                if (lvl == pivot)
                {
                    sum += p->val;
                    count++;
                }
                else if (lvl != pivot)
                {
                    pivot = lvl;
                    double avg = sum / count;
                    sum = 0;
                    sum += p->val;
                    count = 1;
                    vct.push_back(avg);
                }

                if (p->left)
                    q.push({p->left, lvl + 1});
                if (p->right)
                    q.push({p->right, lvl + 1});
            }
            double avg = sum / count;
            vct.push_back(avg);
        }

        return vct;
    }
};