// Shahadat Osman
// Date: 19-03-2025
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        ll t_ways = (pow(i, 2) * (pow(i, 2) - 1)) / 2;
        ll attack_ways = 4 * (i - 1) * (i - 2);

        cout << t_ways - attack_ways << "\n";
    }

    return 0;
}
