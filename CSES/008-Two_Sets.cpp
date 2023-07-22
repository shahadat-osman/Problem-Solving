#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long int n, i, sum = 0, s_sum = 0;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    if (sum % 2 != 0)
    {
        cout << "NO\n";
    }
    else if (sum % 2 == 0)
    {
        cout << "YES\n";

        vector<long long int> a, b;

        sum /= 2;
        for (i = n; i > 0; i--)
        {
            s_sum += i;
            if (s_sum <= sum)
            {
                a.push_back(i);
                continue;
            }
            else if (s_sum > sum)
            {
                s_sum -= i;
                b.push_back(i);
            }
        }
        cout << a.size() << "\n";
        for (i = 0; i < a.size(); i++)
            cout << a[i] << " ";

        cout << "\n"
             << b.size() << "\n";

        for (i = 0; i < b.size(); i++)
            cout << b[i] << " ";
        cout << "\n";
    }

    return 0;
}