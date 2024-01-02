// Shahadat Osman
//  Date: 01-01-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        int w, h, k, glide, total = 0;
        cin >> w >> h >> k;

        while (k--)
        {
            glide = ((2 * w) + (2 * h)) - 4;
            total += glide;

            w -= 4;
            h -= 4;
        }

        cout << total << "\n";
    }

    return 0;
}