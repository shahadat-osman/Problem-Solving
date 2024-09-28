#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b, mx_diff, mx_same;
    cin >> a >> b;
    mx_diff = min(a, b);
    cout << mx_diff << " ";

    mx_same = abs(a - b) / 2;
    cout << mx_same << "\n";

    return 0;
}