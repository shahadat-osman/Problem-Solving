// Shahadat Osman
// Date: 02-02-2024
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMiddleIndex(vector<int> &nums)
    {
        int t_sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            t_sum += nums[i];
        }
        int left_sum = 0, left;
        for (int i = 0; i < nums.size(); i++)
        {
            left_sum += nums[i];
            left = left_sum - nums[i];
            t_sum -= nums[i];
            if (left == t_sum)
                return i;
        }
        return -1;
    }
};