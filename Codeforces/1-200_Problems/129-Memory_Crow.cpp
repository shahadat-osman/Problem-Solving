// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, i, j;

    cin >> n;
    vector<int> vect(n);

    for (i = 0; i < n; i++)
        cin >> vect[i];

    vector<int> s_vect;
    int ith_sum;
    for (i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            s_vect.push_back(vect[n - 1]);
            continue;
        }
        ith_sum = vect[i] + vect[i + 1];
        s_vect.push_back(ith_sum);
    }

    for (i = 0; i < n; i++)
        cout << s_vect[i] << " ";

    cout << "\n";
    return 0;
}