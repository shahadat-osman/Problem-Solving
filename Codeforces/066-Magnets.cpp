#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, i, n1, Ni, count = 1;
    cin >> n >> n1;
    for (i = 0; i < n - 1; i++)
    {
        cin >> Ni;
        if (n1 != Ni)
            count++;

        n1 = Ni;
    }
    cout << count << "\n";

    return 0;
}