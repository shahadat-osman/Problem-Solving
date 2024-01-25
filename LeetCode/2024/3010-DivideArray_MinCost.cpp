// Shahadat Osman
// Date: 20-01-2024
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minimumCost(vector<int> &nums)
    {
        int sum = 0;
        sum += nums[0];

        int mini = *min_element(nums.begin() + 1, nums.end());
        sum += mini;
        nums.erase(find(nums.begin() + 1, nums.end(), mini));
        mini = *min_element(nums.begin() + 1, nums.end());
        sum += mini;

        return sum;
    }
};