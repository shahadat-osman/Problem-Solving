// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, children = 1, counter = 1, i;
    cin >> n;

    i = n - 1;
    while (i--)
    {
        children += counter;
        if (children > n)
        {
            children %= n;
        }
        cout << children << " ";
        counter++;
    }
    cout << "\n";

    return 0;
}