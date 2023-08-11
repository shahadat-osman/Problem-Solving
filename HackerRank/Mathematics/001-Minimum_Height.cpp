#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int b, a, h, check;
    cin >> b >> a;
    h = floor((2 * a) / b);
    check = (b * h) / 2;
    if (check < a)
        h++;
    cout << h << "\n";

    return 0;
}