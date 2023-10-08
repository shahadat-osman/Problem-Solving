// Shahadat Osman
// 678A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k, x, i;
    cin >> n >> k;

    x = n / k;
    x++;
    cout << x * k << "\n";

    return 0;
}