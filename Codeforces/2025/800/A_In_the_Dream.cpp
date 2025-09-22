// Shahadat Osman
// Date: 28-08-2025
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
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        bool f1 = false, f2 = false;
        int cnt;
        if (a == b)
            f1 = true;
        // else if ((a == 0 && b != 0) || (b == 0 && a != 0))
        // {
        //     no();
        //     continue;
        // }
        else if (a > b)
        {
            cnt = a / 2;
            if (a % 2 == 0)
                cnt--;
            if (b >= cnt)
                f1 = true;
        }
        else if (b > a)
        {
            cnt = b / 2;
            if (b % 2 == 0)
                cnt--;
            if (a >= cnt)
                f1 = true;
        }
        if (!f1)
        {
            no();
            continue;
        }
        a = c - a, b = d - b;
        if (a == b)
            f2 = true;
        // else if ((a == 0 && b != 0) || (b == 0 && a != 0))
        // {
        //     no();
        //     continue;
        // }
        else if (a > b)
        {
            cnt = a / 2;
            if (a % 2 == 0)
                cnt--;
            if (b >= cnt)
                f2 = true;
        }
        else if (b > a)
        {
            cnt = b / 2;
            if (b % 2 == 0)
                cnt--;
            if (a >= cnt)
                f2 = true;
        }
        if (f1 && f2)
        {
            yes();
        }
        else
            no();
    }

    return 0;
}