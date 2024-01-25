// Shahadat Osman
// Date: 24-01-2024
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> leftRightDifference(vector<int> &nums)
    {
        int t_sum = 0;
        int sz = nums.size();

        for (int i = 0; i < sz; i++)
            t_sum += nums[i];

        int left_sum = 0;
        vector<int> vect;
        for (int i = 0; i < sz; i++)
        {
            t_sum -= nums[i];
            int x = abs(t_sum - left_sum);
            vect.push_back(x);
            left_sum += nums[i];
        }
        return vect;
    }
};