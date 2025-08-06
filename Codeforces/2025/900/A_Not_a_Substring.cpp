// Shahadat Osman
// Date: 06-08-2025
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
        if (s == "()")
        {
            cout << "NO\n";
            continue;
        }
        int n = s.size();
        string t = "";
        for (int i = 0; i < n; i++)
        {
            t.append("()");
        }

        int sz = t.size();
        bool flg = true;
        for (int i = 0; i < sz - n; i++)
        {
            flg = true;
            string str = t.substr(i, n);
            if (str == s)
            {
                flg = false;
                break;
            }
        }
        if (flg)
        {
            cout << "YES\n";
            cout << t nl;
        }
        else
        {
            t = "";
            for (int i = 0; i < n; i++)
            {
                t.append("(");
            }
            for (int i = 0; i < n; i++)
            {
                t.append(")");
            }
            sz = t.size();
            flg = true;
            for (int i = 0; i < sz - n; i++)
            {
                flg = true;
                string str = t.substr(i, n);
                if (str == s)
                {
                    flg = false;
                    break;
                }
            }
            if (flg)
            {
                cout << "YES\n";
                cout << t nl;
            }
            else
                cout << "NO\n";
        }
    }

    return 0;
}