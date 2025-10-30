// Shahadat Osman
// Date: 28-10-2025
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
        string s, t;
        cin >> s >> t;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (s == t)
            yes();
        else
            no();
    }

    return 0;
}