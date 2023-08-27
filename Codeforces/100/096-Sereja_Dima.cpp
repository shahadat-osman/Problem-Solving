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

    int sz;
    int Sereja = 0, Dima = 0, s_turn = 1, d_turn = 0;
    while (!vect.empty())
    {
        sz = vect.size();
        if (s_turn == 1)
        {
            if (vect[0] > vect[sz - 1])
            {
                Sereja += vect[0];
                vect.erase(vect.begin());
            }
            else
            {
                Sereja += vect[sz - 1];
                vect.pop_back();
            }

            d_turn = 1;
            s_turn = 0;
            continue;
        }
        if (d_turn == 1)
        {
            if (vect[0] > vect[sz - 1])
            {
                Dima += vect[0];
                vect.erase(vect.begin());
            }
            else
            {
                Dima += vect[sz - 1];
                vect.pop_back();
            }

            d_turn = 0;
            s_turn = 1;
        }
    }
    cout << Sereja << " " << Dima << "\n";
    return 0;
}