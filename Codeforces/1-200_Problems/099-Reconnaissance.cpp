// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, d, i, j, count = 0;
    cin >> n >> d;
    vector<int> vect(n);
    for (i = 0; i < n; i++)
        cin >> vect[i];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
                continue;

            if (abs(vect[i] - vect[j]) <= d)
                count++;
        }
    }
    cout << count << "\n";

    return 0;
}