// Shahadat Osman
// Date: 17-10-2025
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
        int a, b;
        cin >> a >> b;

        vector<int> bits;
        for (int k = 31; k >= 0; k--)
        {
            if (((a >> k) & 1) != ((b >> k) & 1))
                bits.push_back(pow(2, k));
        }
        if (a == b)
            cout << 0 nl;
        else
        {
            reverse(bits.begin(), bits.end());
            if (*bits.rbegin() > a)
            {
                cout << -1 nl;
                continue;
            }
            cout << bits.size() nl;
            for (auto val : bits)
                cout << val sp;
            cout nl;
            // for (auto val : bits)
            // {
            //     cout << (a ^ val) sp;
            //     a ^= val;
            // }
            // cout nl;
        }
    }

    return 0;
}