#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, i, total = 0;
    string polyhedrons;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> polyhedrons;
        if (polyhedrons[0] == 'T')
            total += 4;
        if (polyhedrons[0] == 'C')
            total += 6;
        if (polyhedrons[0] == 'O')
            total += 8;
        if (polyhedrons[0] == 'D')
            total += 12;
        if (polyhedrons[0] == 'I')
            total += 20;
    }
    cout << total << "\n";

    return 0;
}