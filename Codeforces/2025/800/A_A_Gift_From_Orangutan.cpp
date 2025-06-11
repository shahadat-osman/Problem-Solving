// Shahadat Osman
// Date: 01-06-2025
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
        deque<int> d(n);
        for (auto &i : d)
            cin >> i;

        sort(d.begin(), d.end());

        d.push_front(d.back());
        d.pop_back();

        ll ans = 0;
        for (int i = 1; i <= n; i++)
        {
            int b = *min_element(d.begin(), d.begin() + i);
            int c = *max_element(d.begin(), d.begin() + i);
            ans += (c - b);
        }

        cout << ans nl;
    }

    return 0;
}