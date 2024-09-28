// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k, x, sum = 0;
    cin >> n >> k >> x;

    vector<int> vect(n);

    for (int i = 0; i < n; i++)
        cin >> vect[i];

    for (int i = n - 1;; i--)
    {
        k--;
        if (k < 0)
            break;
        vect[i] = x;
        }
    for (int i = 0; i < n; i++)
        sum += vect[i];

    cout << sum << "\n";

    return 0;
}