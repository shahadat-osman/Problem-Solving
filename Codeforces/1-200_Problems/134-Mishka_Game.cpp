// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, i, j, m, c, mishka = 0, chris = 0;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> m >> c;
        if (m > c)
            mishka++;
        if (c > m)
            chris++;
    }
    if (mishka > chris)
        cout << "Mishka\n";
    else if (chris > mishka)
        cout << "Chris\n";
    else // if (mishka == chris)
        cout << "Friendship is magic!^^\n";

    return 0;
}