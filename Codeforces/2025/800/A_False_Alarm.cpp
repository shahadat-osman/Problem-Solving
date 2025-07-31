// Shahadat Osman
// Date: 08-06-2025
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

    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> v[i];

        bool flg = false;

        int j;
        for (int i = 1; i <= n; i++)
        {
            if (v[i] == 1 && x == 0)
                break;
            if (v[i] == 1 && flg == false)
            {
                flg = true;
            }
            if (flg && x > 0)
            {
                x--;
            }
            j = i;
        }
        if (j == n)
            yes();
        else
            no();
    }

    return 0;
}