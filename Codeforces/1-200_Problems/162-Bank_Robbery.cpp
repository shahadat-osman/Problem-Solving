// Shahadat Osman
// 794A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c, i, j, count = 0, banknote;

    cin >> a >> b >> c >> banknote;

    vector<int> vect(banknote);

    for (i = 0; i < banknote; i++)
        cin >> vect[i];

    sort(vect.begin(), vect.end());

    for (i = 0; i < banknote; i++)
    {
        if (vect[i] > b && vect[i] < c)
            count++;
    }

    cout << count << "\n";

    return 0;
}