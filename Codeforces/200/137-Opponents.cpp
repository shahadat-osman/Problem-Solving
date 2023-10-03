// Shahadat Osman
//688A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, d, i, j, count = 0, ln, flag = 0, max = 0;
    string s;

    cin >> n >> d;

    for (i = 0; i < d; i++)
    {
        cin >> s;
        ln = s.size();
        flag = 0;
        for (j = 0; j < ln; j++)
        {
            if (s[j] == '0')
            {
                count++;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            if (count >= max)
            {
                max = count;
                count = 0;
            }
            count = 0;
        }
    }
    if (count >= max)
    {
        max = count;
    }

    cout << max << "\n";

    return 0;
}