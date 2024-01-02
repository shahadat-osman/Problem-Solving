#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    return 0;
}
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        int found = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                found = 1;
                break;
            }
        }
        if (found == 1)
            return true;
        else
            return false;
    }
};