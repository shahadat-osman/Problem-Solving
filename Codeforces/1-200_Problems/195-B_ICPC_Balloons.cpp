// Shahadat Osman
//  Date: 02-10-2024
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int freq[26], ballons = 0;
    for (int i = 0; i < 26; i++)
        freq[i] = 0;
    for (int i = 0; i < n; i++)
    {
        int x = s[i] - 65;
        if (freq[x] == 0)
        {
            ballons += 2;
            freq[x] = 1;
        }
        else if (freq[x] == 1)
            ballons++;
    }
    cout << ballons << "\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}