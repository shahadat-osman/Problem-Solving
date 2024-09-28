// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, i, j, count = 1;

    cin >> n;
    vector<int> vect(n);
    for (i = 0; i < n; i++)
        cin >> vect[i];

    int max = 0;
    for (i = 0; i < n - 1; i++)
    {
        if (vect[i] < vect[i + 1])
        {
            count++;
        }
        else
        {
            if (count >= max)
            {
                max = count;
                count = 1;
            }
            count = 1;
        }
    }
    if (count >= max)
        max = count;
    cout << max << "\n";

    return 0;
}