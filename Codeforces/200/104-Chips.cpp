// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m, i = 1, remain;
    cin >> n >> m;
    while (m >= 0)
    {
        remain = m;
        if (i > n)
            i = 1;
        m -= i;
        i++;
    }
    cout << remain << "\n";

    return 0;
}