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
    vector<int> majorityElement(vector<int> &nums)
    {
        map<long long, long long> mp;
        long long sz = nums.size();
        vector<int> v;
        for (long long i = 0; i < sz; i++)
            mp[nums[i]]++;

        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second > (sz / 3))
                v.push_back(it->first);
        }
        return v;
    }
};