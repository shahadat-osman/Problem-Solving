#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, i;
    cin >> n;
    vector<int> vect(n);
    for (i = 0; i < n; i++)
    {
        cin >> vect[i];
    }
    int p = 0, count = 0;
    for (i = 0; i < n; i++)
    {
        if (vect[i] != -1)
        {
            p += vect[i];
        }
        if (vect[i] == -1 && p == 0)
            count++;
        if (vect[i] == -1 && p != 0)
        {
            p--;
        }
    }

    cout << count << "\n";

    return 0;
}