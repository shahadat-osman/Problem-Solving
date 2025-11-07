// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define yes() cout << "Yes\n"
#define no() cout << "No\n"
#define endl '\n'
#define nl << '\n'

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (x * y >= 100)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}