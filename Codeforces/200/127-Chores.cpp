// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, i, j, a, b, x;
    cin >> n >> a >> b;
    vector<int> vect(n + 1);

    for (i = 1; i <= n; i++)
        cin >> vect[i];

    sort(vect.begin(), vect.end());

    x = vect[b + 1] - vect[b];

    cout << x << "\n";
    return 0;
}