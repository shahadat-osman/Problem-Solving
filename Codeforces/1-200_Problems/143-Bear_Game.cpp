// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, i, ans;
    cin >> n;

    vector<int> vect(n);
    for (i = 0; i < n; i++)
        cin >> vect[i];

    if (n == 1)
    {
        if (vect[0] < 15)
        {
            ans = vect[0] + 15;
            cout << ans << "\n";
            return 0;
        }
        if (vect[0] > 15)
        {
            ans = 15;
            cout << ans << "\n";
            return 0;
        }
    }
    bool flg = false;
    for (i = 0; i < n - 1; i++)
    {
        if (i == 0)
        {
            if (vect[i] > 15)
            {
                ans = 15;
                flg = true;
                break;
            }
        }
        if (vect[i] == 90 || vect[i + 1] == 90)
        {
            ans = 90;
            flg = true;
            break;
        }
        if (vect[i + 1] > vect[i] + 15)
        {
            ans = vect[i] + 15;
            flg = true;
            break;
        }
    }
    if (flg == false)
    {
        ans = vect[n - 1] + 15;
    }
    if (ans > 90)
        ans = 90;
    cout << ans << "\n";

    return 0;
}