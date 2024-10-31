// Shahadat Osman
//  Date: 30-10-2024
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> vct(n);
    for (int i = 0; i < n; i++)
        cin >> vct[i];

    int maxx = *(max_element(vct.begin(), vct.end()));
    vector<int> freq(maxx + 1);

    for (int i = 0; i < n; i++)
        freq[vct[i]]++;
    int most = *(max_element(freq.begin(), freq.end()));

    cout << n - most << "\n";
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