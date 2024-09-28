// Shahadat Osman
// 884A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, t, i, count = 0, free, remain;

    cin >> n >> t;

    vector<int> vect(n);
    remain = t;

    for (i = 0; i < n; i++)
    {
        cin >> vect[i];

        if (remain <= 0)
            continue;
        count++;

        free = 86400 - vect[i];
        remain -= free;
    }
    cout << count << "\n";

    return 0;
}