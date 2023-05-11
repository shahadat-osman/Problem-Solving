#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int i, j, freq[26], odd, sz, ind, lp, start, end;
    string n;

    cin >> n;
    for (i = 0; i < 26; i++)
        freq[i] = 0;

    for (i = 0; i < n.size(); i++)
    {
        freq[n[i] - 65]++;
    }

    odd = 0;
    for (i = 0; i < 26; i++)
    {
        if (freq[i] % 2 != 0)
            odd++;
    }

    sz = n.size();
    if (odd > 1)
    {
        cout << "NO SOLUTION\n";
        return 0;
    }

    else
    {
        start = 0;
        end = n.size() - 1;

        for (i = 0; i < 26; i++)
        {
            ind = 0;
            if (freq[i] % 2 == 0)
            {
                lp = freq[i] / 2;
                while (lp--)
                {
                    n[start] = i + 65;
                    n[end] = i + 65;
                    start++;
                    end--;
                }
            }
            if (freq[i] % 2 != 0)
            {
                ind = (sz - freq[i]) / 2;

                while (freq[i]--)
                {
                    n[ind] = i + 65;
                    ind++;
                }
            }
        }
    }
    cout << n << "\n";

    return 0;
}