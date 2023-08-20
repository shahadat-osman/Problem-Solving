// Shahadat Osman

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, count = 1, round_numb, k = 0;
    cin >> n;
    vector<int> vect;
    while (n > 0)
    {
        round_numb = n % 10;
        round_numb *= count;
        count *= 10;
        n /= 10;
        if (round_numb == 0)
            continue;
        k++;
        vect.push_back(round_numb);
    }
    cout << k << "\n";
    for (auto view : vect)
        cout << view << " ";
    cout << "\n";
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