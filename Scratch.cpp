#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int k, s, x, y, z, count = 0;
    cin >> k >> s;

    for (x = 0; x <= s; x++)
    {
        for (y = 0; y <= s; y++)
        {
            for (z = 0; z <= s; z++)
            {
                if ((x + y + z) == s)
                    count++;
            }
        }
    }
    cout << count << "\n";

    return 0;
}