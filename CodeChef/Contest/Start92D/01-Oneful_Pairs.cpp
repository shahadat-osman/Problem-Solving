#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    cin >> a >> b;
    int ans = a + b + (a * b);
    if (ans == 111)
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}