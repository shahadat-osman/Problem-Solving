// MISSP
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, i;
    cin >> n;
    vector<int> arr;
    for (i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());
    for (i = 0; i < n; i += 2)
    {
        if (arr[i] != arr[i + 1])
        {
            cout << arr[i] << "\n";
            break;
        }
    }
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