// Shahadat Osman
// Date: 01-11-2025
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
        int scored = 0, conceded = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int x;
            cin >> x;
            if (x >= 0)
                scored += x;
            else
            {
                conceded += (x * -1);
            }
        }
        cout << conceded - scored nl;
    }

    return 0;
}