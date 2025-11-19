// Shahadat Osman
// Date: 19-11-2025
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
        ll n, x;
        cin >> n >> x;
        vector<ll> v(n);
        set<ll> st;
        for (int i = 0; i < n; i++)
        {

            cin >> v[i];
            st.insert(v[i]);
        }

        sort(v.begin(), v.end());

        if (x <= v[0] || x >= v[n - 1] || st.find(x) != st.end())
            yes();
        else
            no();
    }

    return 0;
}