// Shahadat Osman
// Date: 19-01-2024
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int x, y;
        sort(nums.begin(), nums.end());

        x = nums.back() - 1;
        nums.pop_back();
        y = nums.back() - 1;

        return x * y;
    }
};
