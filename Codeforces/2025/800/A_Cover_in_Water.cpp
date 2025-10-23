// Shahadat Osman
// Date: 22-10-2025
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
        int n;
        cin >> n;

        string s;
        cin >> s;
        int count = 0, flg = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
                count++;
            if (i > 0 && i < n - 1)
            {
                if (s[i] == '.' && s[i - 1] == '.' && s[i + 1] == '.')
                {
                    flg = 1;
                    break;
                }
            }
        }
        if (flg)
            cout << 2 nl;
        else
            cout << count nl;
    }

    return 0;
}