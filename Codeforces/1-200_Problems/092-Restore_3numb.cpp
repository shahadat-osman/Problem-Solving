// Shahadat Osman

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    vector<int> vect(4);

    for (int i = 0; i < 4; i++)
        cin >> vect[i];

    sort(vect.begin(), vect.end(), greater<int>()); // sorting a vector in decreasing order

    a = vect[0] - vect[1];
    b = vect[2] - a;
    c = vect[3] - a;
    cout << a << " " << b << " " << c << " ";

    return 0;
}