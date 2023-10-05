// Shahadat Osman
// 248A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, i, left_door, left_open = 0, right_door, right_open = 0, total = 0;

    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> left_door >> right_door;
        if (left_door == 1)
            left_open++;
        if (right_door == 1)
            right_open++;
    }
    int left_close = n - left_open, right_close = n - right_open;
    if (left_open <= left_close)
        total += left_open;
    else if (left_open > left_close)
        total += left_close;

    if (right_open <= right_close)
        total += right_open;
    else if (right_open > right_close)
        total += right_close;

    cout << total << "\n";

    return 0;
}