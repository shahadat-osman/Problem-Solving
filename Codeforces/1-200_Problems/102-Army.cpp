// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, a, b, i, rank, t_years = 0;
    cin >> n;
    vector<int> vect(n - 1);
    for (i = 1; i <= n - 1; i++)
        cin >> vect[i];

    cin >> a >> b;

    rank = abs(a - b);

    while (rank--)
    {
        t_years += vect[a++];
    }
    cout << t_years << "\n";

    return 0;
}