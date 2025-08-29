// Shahadat Osman
// Date: 27-08-2025
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
        string s;
        cin >> s;
        int n = s.size();

        int cnt = 0, maxx = 0, mini = INT_MAX;
        for (char i = 'a'; i <= 'z'; i++)
        {
            cnt = 0, maxx = 0;
            for (int j = 0; j < n; j++)
            {
                if (s[j] != i)
                {
                    cnt++;
                    if (cnt > maxx)
                        maxx = cnt;
                }
                else
                    cnt = 0;
            }
            if (maxx < mini)
                mini = maxx;
        }
        if (mini == 0)
            cout << 0 nl;
        else
        {
            int ans = __lg(mini);
            cout << ++ans nl;
        }
    }

    return 0;
}