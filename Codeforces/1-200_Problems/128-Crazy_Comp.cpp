// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, i, c;
    cin >> n >> c;

    vector<int> vect(n);

    for (i = 0; i < n; i++)
        cin >> vect[i];

    int count = 1;
    for (i = 1; i < n; i++)
    {
        if (vect[i] - vect[i - 1] <= c)
            count++;
        else
        {
            count = 1;
        }
    }

    cout << count << "\n";

    return 0;
}