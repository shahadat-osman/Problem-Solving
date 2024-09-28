// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, i, j, total_burles = 0;
    cin >> n;
    vector<int> vect(n);
    for (i = 0; i < n; i++)
        cin >> vect[i];

    int max_e = *max_element(vect.begin(), vect.end());

    for (i = 0; i < n; i++)
    {
        total_burles += (max_e - vect[i]);
    }
    cout << total_burles << "\n";
    return 0;
}