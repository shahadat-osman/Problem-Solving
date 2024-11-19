// Shahadat Osman
// Date: 19-11-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        map<int, int> mp;
        int single;
        for (auto val : nums)
        {
            mp[val]++;
        }
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second == 1)
            {
                single = it->first;
                break;
            }
        }
        return single;
    }
};