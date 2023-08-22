#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int k, r;
    cin >> k >> r;
    for (int i = 1;; i++)
    {
        int temp = (k * i) - r;
        if ((k * i) % 10 == 0 || temp % 10 == 0)
        {
            cout << i << "\n";
            break;
        }
    }

    return 0;
}