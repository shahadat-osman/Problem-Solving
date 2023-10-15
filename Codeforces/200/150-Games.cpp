// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, i, j;
    cin >> n;

    int home[n], away[n], count = 0;

    for (i = 0; i < n; i++)
        cin >> home[i] >> away[i];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (home[i] == away[j])
                count++;
        }
    }

    cout << count << "\n";

    return 0;
}