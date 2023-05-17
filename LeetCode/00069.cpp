// 69. Sqrt(x)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int mySqrt(int x)
    {
        int strt = 1, end = x, mid, ans = 0;

        while (strt <= end)
        {
            mid = strt + (end - strt) / 2;
            long long int mid_sq = mid * mid;
            if ((mid_sq) > x)
            {
                end = mid - 1;
            }
            else if ((mid_sq) <= x)
            {
                ans = mid;
                strt = mid + 1;
            }
        }
        return ans;
    }
};