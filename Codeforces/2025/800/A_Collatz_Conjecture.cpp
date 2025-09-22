// Shahadat Osman
// Date: 07-09-2025
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define yes() cout << "YES\n"
#define no() cout << "NO\n"
#define endl '\n'
#define nl << '\n'
#define sp << ' '

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        ll k, n;
        cin >> k >> n;
        for (int i = 0; i < k; i++)
        {
            n *= 2;
        }
        cout << n nl;
    }

    return 0;
}