// Shahadat Osman
// Date: 22-10-2025
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define yes() cout << "YES\n"
#define no() cout << "NO\n"
#define endl '\n'
#define nl << '\n'
#define sp << ' '

int gcd(int a, int b)
{
    int n;
    if (a >= b)
        n = b;
    else
        n = a;
    int G;
    for (int i = 1; i <= n; i++)
    {
        if (a % i == 0 && b % i == 0)
            G = i;
    }
    return G;
}

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
        vector<int> nums;
        multiset<int> ml;
        map<int, vector<int>> mp;
        for (int i = 1; i <= n; i++)
        {
            int G = gcd(i, n);
            if (gcd(i, n) != 1)
            {
                mp[G].push_back(i);
                ml.insert(i);
            }
        }

        for (auto [x, y] : mp)
        {
            reverse(y.begin(), y.end());
            for (int i = 0; i < y.size(); i++)
            {
                nums.push_back(y[i]);
            }
            // cout << x sp;
            // for (int i = 0; i < y.size(); i++)
            // {
            //     cout << y[i] sp;
            // }
            // cout nl;
        }
        reverse(nums.begin(), nums.end());
        for (int i = 1; i <= n; i++)
        {
            if (ml.find(i) == ml.end())
                nums.push_back(i);
        }
        for (auto val : nums)
            cout << val sp;
        cout nl;
    }

    return 0;
}