// Shahadat Osman
//  Date: 31-10-2024
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    int maxx = *(max_element(arr.begin(), arr.end()));

    vector<int> frq(maxx + 1);
    frq[arr[1]] = 1;
    
    for (int i = 2; i <= n; i++)
    {
        int x = arr[i];
        if (x == 1 || x == n)
        {
            if (x == n)
                if (frq[x - 1] != 1)
                {
                    cout << "NO\n";
                    return;
                }

            if (x == 1)
                if (frq[x + 1] != 1)
                {
                    cout << "NO\n";
                    return;
                }
        }
        if (frq[x - 1] != 1 && frq[x + 1] != 1)
        {
            cout << "NO\n";
            return;
        }
        frq[x] = 1;
    }

    cout << "YES\n";
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