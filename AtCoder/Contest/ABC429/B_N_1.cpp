// Shahadat Osman
// Date: 25-10-2025
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

    int t = 1;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        multiset<int> ml;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            ml.insert(x);
            sum += x;
        }
        if (ml.find(sum - m) != ml.end())
            yes();
        else
            no();
    }

    return 0;
}