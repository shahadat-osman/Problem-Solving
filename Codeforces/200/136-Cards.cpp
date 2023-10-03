// Shahadat Osman
//701A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, i, j, sum = 0, people, find;

    cin >> n;

    people = n / 2;
    vector<int> vect(n);

    for (i = 1; i <= n; i++)
    {
        cin >> vect[i];
        sum += vect[i];
    }

    sum /= people;

    while (people--)
    {
        for (i = 1; i <= n; i++)
        {
            if (vect[i] == 0)
                continue;
            find = sum - vect[i];
            for (j = i + 1; j <= n; j++)
            {
                if (vect[j] == find)
                {
                    cout << i << " " << j << "\n";
                    vect[i] = 0;
                    vect[j] = 0;
                    break;
                }
            }
        }
    }

    return 0;
}