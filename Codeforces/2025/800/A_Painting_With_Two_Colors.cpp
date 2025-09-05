// Shahadat Osman
// Date: 26-08-2025
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
    for (int i = 0; i < t; i++)
    {
        ll n, a, b;
        cin >> n;
        cin >> a >> b;

        if (n == a && a == b)
            yes();
        else if (a > b)
        {
            if (n % 2 == 0 && a % 2 == 0 && b % 2 == 0)
            {
                yes();
            }
            else if (n % 2 != 0 && a % 2 != 0 && b % 2 != 0)
            {
                yes();
            }
            else
                no();
        }
        else if (b > a)
        {
            if (n % 2 == 0 && b % 2 == 0)
            {
                yes();
            }
            else if (n % 2 != 0 && b % 2 != 0)
            {
                yes();
            }
            else
                no();
        }
        else if (a == b)
        {
            if (n % 2 == 0 && a % 2 == 0)
                yes();
            else if (n % 2 != 0 && a % 2 != 0)
                yes();
            else
                no();
        }
    }

    return 0;
}