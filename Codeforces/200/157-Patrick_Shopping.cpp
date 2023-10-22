// Shahadat Osman
// 599A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;

    int l1, l2, l3, l4, mini;

    l1 = d1 + d2 + d3;
    l2 = (d1 + d2) * 2;
    l3 = (d1 + d3) * 2;
    l4 = (d2 + d3) * 2;

    mini = min({l1, l2, l3, l4});

    cout << mini << "\n";

    return 0;
}