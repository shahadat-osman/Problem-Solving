// Shahadat Osman
// Date: 26-10-2025
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
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        if (mp.size() == 1)
            yes();
        else if (mp.size() > 2)
            no();
        else
        {
            int a = mp.begin()->second;
            int b = mp.rbegin()->second;

            if (a == b || a + 1 == b || b + 1 == a)
                yes();
            else
                no();
        }
    }

    return 0;
}