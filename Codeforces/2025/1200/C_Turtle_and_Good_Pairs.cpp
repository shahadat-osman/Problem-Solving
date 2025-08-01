// Shahadat Osman
// Date: 01-08-2025
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
        string str;
        cin >> str;

        int frq[26] = {};

        for (int i = 0; i < n; i++)
        {
            frq[str[i] - 97]++;
        }
        string best_str = "";

        bool flg = false;
        while (true)
        {
            flg = false;
            for (int i = 0; i < 26; i++)
            {
                if (frq[i] > 0)
                {
                    best_str += i + 97;
                    flg = true;
                    frq[i]--;
                }
            }
            if (!flg)
                break;
        }
        cout << best_str nl;
    }

    return 0;
}