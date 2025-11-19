// Shahadat Osman
// Date: 19-11-2025
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

    int t = 1;
    while (t--)
    {
        int n, k, r;
        cin >> n >> k >> r;
        cout << (n - k) * r nl;
    }

    return 0;
}