// Shahadat Osman
// 609A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m, i, count = 0;

    cin >> n >> m;

    vector<int> arr(n);

    for (i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.rbegin(), arr.rend());

    for (i = 0; i < n; i++)
    {
        if (m <= 0)
            break;
        m -= arr[i];
        count++;
    }

    cout << count << "\n";

    return 0;
}