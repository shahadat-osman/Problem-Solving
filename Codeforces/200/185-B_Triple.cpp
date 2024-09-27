// Shahadat Osman
//  Date: 22-09-2024
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
            count++;
        if (count == 3)
        {
            cout << arr[i] << "\n";
            return;
        }
        else if (arr[i] != arr[i - 1])
        {
            count = 1;
        }
    }
    cout << "-1\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}