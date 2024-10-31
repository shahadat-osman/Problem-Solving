// Shahadat Osman
// Date: 28-10-2024
#include <bits/stdc++.h>
using namespace std;

int main() {}

class Solution
{
public:
    vector<int> nextGreaterElements(vector<int> &nums)
    {
        int sz = nums.size();

        vector<int> vct;

        if (sz == 1)
        {
            vct.push_back(-1);
            return vct;
        }

        for (int i = 0; i < sz; i++)
        {
            int x = i + 1;
            bool flag = 0;
            for (int j = i + 1; x != i; j++)
            {
                x = j % sz;
                if (nums[x] > nums[i])
                {
                    vct.push_back(nums[x]);
                    flag = 1;
                    break;
                }
            }
            if (!flag)
                vct.push_back(-1);
        }

        return vct;
    }
};