// PARKINGCHARG
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int x, y, h;
    cin >> x >> y >> h;
    int total = ((h - 1) * y) + x;

    cout << total << "\n";

    return 0;
}