// Shahadat Osman
// Date: 07-09-2025
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
        vector<int> nums(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> nums[i];
        }

        int ans;

        if ((n % 3 == 0) || (n % 4 == 0) || (n % 5 == 0))
            ans = n;
        else
        {
            ans = n + 1;
        }
        vector<int> vct(n + 1);
        for (int i = 1; i <= n; i++)
        {
            vct[i] = ans - nums[i];
            if (vct[i] == 0)
                vct[i] = ans;
        }
        for (int i = 1; i <= n; i++)
        {
            cout << vct[i] sp;
        }
        cout nl;
    }

    return 0;
}