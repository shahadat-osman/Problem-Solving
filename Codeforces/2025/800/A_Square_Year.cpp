// Shahadat Osman
// Date: 26-05-2025
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
        string s;
        cin >> s;

        int n = stoi(s);
        int rt = sqrt(n);

        int pwr = rt * rt;

        if (pwr != n)
            cout << -1 nl;
        else
        {
            cout << rt << " " << 0 nl;
        }
    }

    return 0;
}