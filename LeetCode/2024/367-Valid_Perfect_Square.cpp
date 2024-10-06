// Shahadat Osman
//  Date: 05-10-2024
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        long long left = 0, right = num;
        bool flag = false;

        while (left <= right)
        {
            long long mid = (left + right) / 2;
            long long esqr = mid * mid;

            if (esqr == num)
            {
                flag = true;
                break;
            }

            else
            {
                if (esqr < num)
                    left = mid + 1;

                else if (esqr > num)
                    right = mid - 1;
            }
        }

        return flag;
    }
};

/* int main()
{
    Solution sol;
    int num;

    cin >> num;

    if (sol.isPerfectSquare(num))
    {
        cout << "true\n";
    }
    else
    {
        cout << "false\n";
    }

    return 0;
} */
