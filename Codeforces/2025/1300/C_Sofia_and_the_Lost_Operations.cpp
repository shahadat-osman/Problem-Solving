// Shahadat Osman
// Date: 09-10-2025
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
        vector<int> a(n), b(n);
        for (int &i : a)
            cin >> i;
        for (int &i : b)
            cin >> i;

        int m;
        cin >> m;
        vector<int> c(m);
        for (int &i : c)
            cin >> i;

        map<int, int> b1, c1;

        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
                b1[b[i]]++;
        }
        for (auto val : c)
            c1[val]++;

        int f = 1;
        for (auto [x, y] : b1)
        {
            if (c1[x] < y)
            {
                f = 0;
                break;
            }
        }
        if (count(b.begin(), b.end(), c[m - 1]) == 0)
            f = 0;
        if (f)
            yes();
        else
            no();
    }

    return 0;
}