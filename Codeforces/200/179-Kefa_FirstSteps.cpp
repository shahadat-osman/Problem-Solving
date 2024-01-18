// Shahadat Osman
// Date: 14-01-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 1, maxx = 1;
    cin >> n;

    vector<int> vect(n);

    for (int i = 0; i < n; i++)
        cin >> vect[i];

    for (int i = 1; i < n; i++)
    {
        if (vect[i] >= vect[i - 1])
        {
            count++;
            if (count > maxx)
                maxx = count;
        }
        else
            count = 1;
    }

    cout << maxx << "\n";

    return 0;
}