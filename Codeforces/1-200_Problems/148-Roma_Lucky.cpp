// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k, i, numb, count = 0, digit, mod;
    cin >> n >> k;

    while (n--)
    {
        cin >> numb;
        digit = 0;
        while (numb > 0)
        {
            mod = numb % 10;
            if (mod == 4 || mod == 7)
                digit++;

            numb /= 10;
        }
        if (digit <= k)
            count++;
    }
    cout << count << "\n";

    return 0;
}