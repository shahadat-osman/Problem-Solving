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
    int majorityElement(vector<int> &nums)
    {
        map<long long, long long> mp;
        long long sz = nums.size();
        for (long long i = 0; i < sz; i++)
        {
            mp[nums[i]]++;
        }
        long long maxx = -1;
        long long element;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second > maxx)
            {
                maxx = it->second;
                element = it->first;
            }
        }
        return element;
    }
};