// Shahadat Osman
// Date: 25-01-2024
#include <bits/stdc++.h>
using namespace std;

int divisible(int start, int n, int m)
{
    int nums = 0;
    for (int i = start; i <= n; i++)
    {
        if (i % m == 0)
            nums++;
    }
    return nums;
}

int main()
{
    int n, m, start = 1, total;
    cin >> n >> m;

    total = n;
    while (true)
    {
        int nums = divisible(start, n, m);
        if (nums == 0)
            break;
        else
        {
            total += nums;
            start = n + 1;
            n = total;
        }
    }
    cout << total << "\n";

    return 0;
}