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
        string a;
        cin >> a;
        string b;
        cin >> b;
        int a_one = 0;
        int b_one = 0;
        int mismatch = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
                a_one++;
            if (b[i] == '1')
                b_one++;
            if (b[i] == '1' && a[i] != '1')
                mismatch++;
        }
        int ans = 0;
        if (b_one == a_one && mismatch)
            ans = mismatch;
        else if (b_one > a_one)
        {
            ans += (b_one - a_one);
            mismatch -= ans;
            if (mismatch)
                ans += mismatch;
        }
        else if (a_one > b_one)
        {
            ans += mismatch;
            if (a_one)
                ans += abs(a_one - b_one);
        }

        cout << ans nl;
    }

    return 0;
}