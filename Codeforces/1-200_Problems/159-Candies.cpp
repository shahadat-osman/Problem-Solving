// Shahadat Osman
// 306A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m, candies, extra;
    cin >> n >> m;

    candies = n / m;
    vector<int> vect(m, candies);

    candies++;

    extra = n % m;
    fill(vect.begin(), vect.begin() + extra, candies);

    for (auto elem : vect)
    {
        cout << elem << " ";
    }

    return 0;
}