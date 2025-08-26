// Shahadat Osman
// Date: 23-08-2025
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
        if (n < 4)
            cout << 1 nl;
        else
        {
            if (n % 2 == 0)
                cout << n / 2 nl;
            else
            {
                n--;
                cout << n / 2 nl;
            }
        }
    }

    return 0;
}