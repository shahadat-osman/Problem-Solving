// Shahadat Osman
// Date: 04-08-2025
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
        int n;
        cin >> n;

        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            if (i < n - 2)
                sum += num;
            if (i == n - 2)
            {
                sum = num - sum;
            }
            if (i == n - 1)
            {
                sum = num - sum;
            }
        }
        cout << sum nl;
    }

    return 0;
}