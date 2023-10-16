// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, i, j, s, t, forward = 0, backward = 0, min_dist;
    cin >> n;

    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    cin >> s >> t;

    if (s > t)
    {
        int temp;
        temp = s;
        s = t;
        t = temp;
    }

    for (i = s; i < t; i++)
    {
        forward += arr[i];
    }
    for (i = 1; i <= n; i++)
    {
        if (i >= s && i < t)
            continue;
        backward += arr[i];
    }

    min_dist = min(forward, backward);

    cout << min_dist << "\n";

    return 0;
}