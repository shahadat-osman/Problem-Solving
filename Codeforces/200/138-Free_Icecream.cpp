// Shahadat Osman
//686A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, i, count = 0;
    long long d, x;
    char symb;
    cin >> n >> x;

    for (i = 0; i < n; i++)
    {
        cin >> symb >> d;
        if (symb == '+')
        {
            x += d;
        }
        else if (symb == '-')
        {
            if (d > x)
                count++;
            else if (d <= x)
                x -= d;
        }
    }
    cout << x << " " << count << "\n";

    return 0;
}