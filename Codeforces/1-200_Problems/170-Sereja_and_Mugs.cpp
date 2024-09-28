// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, s, i, sum=0;

    cin >> n >> s;

    vector<int> vect(n);

    for (i = 0; i < n; i++)
        cin >> vect[i];

    sort(vect.begin(), vect.end());

    for (i = 0; i < n - 1; i++)
        sum += vect[i];

    if (sum <= s)
        cout << "YES\n";

    else
        cout << "NO\n";

    return 0;
}