// Shahadat Osman
// Date: 20-01-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, sum=0;
    cin >> n >> m;

    vector<int> vect(n);
    for (int i = 0; i < n; i++)
        cin >> vect[i];

    sort(vect.begin(), vect.end());
    
    int i = 0;
    while (vect[i] < 0 && m--)
    {
        sum += 0 - vect[i];
        i++;
    }

    cout << sum << "\n";
    return 0;
}