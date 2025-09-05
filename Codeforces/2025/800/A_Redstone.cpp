// Shahadat Osman
// Date: 24-08-2025
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define yes() cout << "Yes\n"
#define no() cout << "No\n"
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
        map<int, int> gears;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            gears[x]++;
        }
        bool flg = false;
        for (auto [key, value] : gears)
        {
            if (value >= 2)
            {
                flg = true;
                break;
            }
        }
        if (flg)
            yes();
        else
            no();
    }

    return 0;
}