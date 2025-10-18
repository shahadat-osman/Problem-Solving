// Shahadat Osman
// Date: 17-10-2025
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
        vector<int> one;
        bool flg = 1;
        int l = 0, r = n - 1;
        while (l <= r)
        {
            if (s[l] != s[r])
            {
                flg = 0;
                break;
            }
            l++, r--;
        }
        if (flg == 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '1')
                    one.push_back(i + 1);
            }
        }
        cout << one.size() nl;
        for (auto val : one)
            cout << val sp;
        cout nl;
    }

    return 0;
}