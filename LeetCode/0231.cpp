#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {

        int i = 0;
        bool ans = false;
        while (1)
        {
            long long int res = pow(2, i);
            if (res == n)
            {
                ans = true;
                break;
            }
            else if (res > n)
            {
                ans = false;
                break;
            }
            i++;
        }
        return ans;
    }
};