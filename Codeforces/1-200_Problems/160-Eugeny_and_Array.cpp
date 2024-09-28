// Shahadat Osman
// 302A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m, i, j = 0, inp, one = 0, m_one = 0, l, r, len, response = 0, half;

    cin >> n >> m;

    vector<int> vect(m);

    for (i = 0; i < n; i++)
    {
        cin >> inp;
        if (inp == 1)
            one++;
        if (inp == -1)
            m_one++;
    }

    while (m--)
    {
        cin >> l >> r;

        len = r - l;
        len++;
        if (len % 2 != 0)
            response = 0;
        else if (len % 2 == 0)
        {
            half = len / 2;
            if (half <= one && half <= m_one)
                response = 1;
            else
                response = 0;
        }
        vect[j++] = response;
    }

    for (i = 0; i < j; i++)
        cout << vect[i] << "\n";

    return 0;
}