// Shahadat Osman

#include <bits/stdc++.h>
using namespace std;
bool is_prime(int a)
{
    int i;
    for (i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
            return true;
    }

    return false;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, x, y;
    cin >> n;

    if (is_prime(n - 4))
    {
        x = n - 4;
        y = 4;
    }
    else if (is_prime(n - 6))
    {
        x = n - 6;
        y = 6;
    }
    else if (is_prime(n - 8))
    {
        x = n - 8;
        y = 8;
    }
    cout << x << " " << y << "\n";

    return 0;
}