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
    int findDuplicate(vector<int> &nums)
    {
        map<int, int> mp;
        int dupli;
        for (auto v : nums)
        {
            mp[v]++;
            if (mp[v] > 1)
            {
                dupli = v;
                break;
            }
        }
        return dupli;
    }
};