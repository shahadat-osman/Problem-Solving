// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, remain, ways;
    cin >> n;

    remain = n - 10;

    if (remain >= 1 && remain <= 11 && remain != 10)
    {
        ways = 4;
    }
    else if (remain == 10)
        ways = 15;

    else
        ways = 0;

    cout << ways << "\n";

    return 0;
}