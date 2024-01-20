// Shahadat Osman
// Date: 20-01-2024
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sortArray(vector<int> &nums)
    {
        int sz = nums.size();
        if (sz == 1)
            return nums;

        int mid = sz / 2;

        vector<int> a, b;
        for (int i = 0; i < mid; i++)
            a.push_back(nums[i]);
        for (int i = mid; i < sz; i++)
            b.push_back(nums[i]);

        vector<int> s_a, s_b;
        s_a = sortArray(a);
        s_b = sortArray(b);

        vector<int> c;
        int p = 0, q = 0;
        for (int i = 0; i < sz; i++)
        {
            if (q == s_b.size())
            {
                c.push_back(s_a[p]);
                p++;
            }
            else if (p == s_a.size())
            {
                c.push_back(s_b[q]);
                q++;
            }
            else if (s_a[p] > s_b[q])
            {
                c.push_back(s_b[q]);
                q++;
            }
            else
            {
                c.push_back(s_a[p]);
                p++;
            }
        }
        return c;
    }
};