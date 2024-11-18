// Shahadat Osman
// Date: 16-11-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}
// Definition for a Node.
class Node
{
public:
    int val;
    vector<Node *> children;

    Node() {}

    Node(int _val)
    {
        val = _val;
    }

    Node(int _val, vector<Node *> _children)
    {
        val = _val;
        children = _children;
    }
};

class Solution
{
public:
    vector<vector<int>> levelOrder(Node *root)
    {
        vector<vector<int>> vct;
        if (root)
        {
            queue<pair<Node *, int>> q;
            q.push({root, 1});

            int pivot = 1;
            vector<int> sub_vct;
            while (!q.empty())
            {
                pair<Node *, int> pr = q.front();
                q.pop();
                Node *p = pr.first;
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

                for (Node *child : p->children)
                {
                    if (child)
                    {
                        q.push({child, lvl + 1});
                    }
                }
            }
            if (!sub_vct.empty())
                vct.push_back(sub_vct);
        }

        return vct;
    }
};