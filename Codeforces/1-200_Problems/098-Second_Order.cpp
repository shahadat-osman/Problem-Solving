// Shahadat Osman

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
        cin >> vect[i];

    if (vect.size() == 1)
    {
        cout << "NO\n";
        return 0;
    }

    sort(vect.begin(), vect.end());

    while (vect.size() != 1 && vect[0] == vect[1])
    {
        vect.erase(vect.begin());
    }

    if (vect.size() == 1)
    {
        cout << "NO\n";
        return 0;
    }
    cout << vect[1] << "\n";

    return 0;
}