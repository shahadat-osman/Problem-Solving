// Shahadat Osman
// Date: 01-11-2025
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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (c >= a && d >= b)
            no();
        else if (c < a && d < b)
            no();
        else if (c < a && d >= b)
            no();
        else
            yes();
    }

    return 0;
}