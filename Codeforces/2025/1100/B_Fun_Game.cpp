// Shahadat Osman
// Date: 05-06-2025
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
        string s, t;
        cin >> s >> t;

        if (s == t || s[0] == '1')
            yes();

        else
        {
            int pos = -1;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '1')
                {
                    pos = i;
                    break;
                }
            }
            if (pos == -1)
                no();
            else
            {
                bool flg = true;
                for (int i = 0; i < n; i++)
                {
                    if (s[i] != t[i] && pos > i)
                    {
                        flg = false;
                        break;
                    }
                }
                if (flg)
                    yes();
                else
                    no();
            }
        }
    }

    return 0;
}