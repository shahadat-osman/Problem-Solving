// Shahadat Osman
// Date: 03-06-2025
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
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool flg = false;
        int zero = 0, one = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                one++;
                flg = false;
            }
            else if (s[i] == '0' && flg == false)
            {
                zero++;
                flg = true;
            }
        }
        if (one > zero)
            yes();
        else
            no();
    }

    return 0;
}