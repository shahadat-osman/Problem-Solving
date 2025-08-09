// Shahadat Osman
// Date: 22-07-2025
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
        int frq[26 + 1] = {};

        for (int i = 0; i < s.size(); i++)
        {
            char ch = s[i];
            frq[ch - 65]++;
        }

        string t = "";

        while (frq[19])
        {
            t += 19 + 'A';
            frq[19]--;
        }
        while (true)
        {
            bool flg = false;
            for (int i = 25; i >= 0; i--)
            {
                if (i == 19)
                    continue;
                if (frq[i] > 0)
                {
                    char ch = i + 'A';
                    t += ch;
                    frq[i]--;

                    flg = true;
                }
            }
            if (flg == false)
                break;
        }

        cout << t nl;
    }

    return 0;
}