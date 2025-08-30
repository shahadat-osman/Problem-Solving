// Shahadat Osman
// Date: 21-08-2025
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
        string a;
        cin >> a;
        deque<char> str;
        for (int i = 0; i < n; i++)
        {
            str.push_back(a[i]);
        }
        int m;
        cin >> m;
        string b;
        cin >> b;
        string c;
        cin >> c;
        for (int i = 0; i < m; i++)
        {
            if (c[i] == 'V')
                str.push_front(b[i]);
            else
                str.push_back(b[i]);
        }
        string ans = "";
        for (int i = 0; i < str.size(); i++)
        {
            ans.push_back(str[i]);
        }
        cout << ans nl;
    }

    return 0;
}