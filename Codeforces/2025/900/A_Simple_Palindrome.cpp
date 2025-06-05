// Shahadat Osman
// Date: 02-06-2025
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
        string vowel = "aeiou";
        string ans = "";

        map<char, int> mp;

        int d = n / 5;
        for (int i = 0; i < 5; i++)
        {
            mp[vowel[i]] = d;
        }
        for (int i = 0; i < n % 5; i++)
        {
            mp[vowel[i]]++;
        }
        for (auto [x, y] : mp)
        {
            for (int i = 0; i < y; i++)
            {
                ans += x;
            }
        }
        cout << ans nl;
    }

    return 0;
}