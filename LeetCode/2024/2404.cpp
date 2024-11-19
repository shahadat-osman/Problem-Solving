// Shahadat Osman
// Date: 18-11-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}
class Solution
{
public:
    int mostFrequentEven(vector<int> &nums)
    {
        int sz = nums.size();
        bool flg = false;
        map<int, int> mp;
        pair<int, int> frq = {INT_MAX, -1};
        for (int i = 0; i < sz; i++)
        {
            if (nums[i] % 2 == 0)
            {
                mp[nums[i]]++;
                if (mp[nums[i]] > frq.second)
                {
                    flg = true;
                    frq = {nums[i], mp[nums[i]]};
                }
                if (mp[nums[i]] >= frq.second && nums[i] < frq.first)
                    frq.first = nums[i];
            }
        }
        if (flg)
            return frq.first;
        return -1;
    }
};