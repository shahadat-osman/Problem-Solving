// Shahadat Osman
// Date: 13-10-2025
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
        int n;
        cin >> n;
        set<int> ml;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            ml.insert(x);
        }
        if (ml.size() > 1)
            cout << 2 nl;
        else
            cout << -1 nl;
    }

    return 0;
}