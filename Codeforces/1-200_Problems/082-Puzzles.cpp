#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m, i, j, ans;
    cin >> n >> m;
    vector<int> vect(m);
    for (i = 0; i < m; i++)
        cin >> vect[i];

    sort(vect.begin(), vect.end());

    int min = vect[m - 1];
    for (i = 0, j = n - 1; j < m; i++, j++)
    {
        ans = vect[j] - vect[i];
        if (ans < min)
        {
            min = ans;
        }
    }

    cout << min << "\n";

    return 0;
}