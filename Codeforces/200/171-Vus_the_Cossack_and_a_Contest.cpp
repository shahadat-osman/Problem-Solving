// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, pens, notebooks;
    cin >> n >> pens >> notebooks;

    if (n <= pens && n <= notebooks)
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}