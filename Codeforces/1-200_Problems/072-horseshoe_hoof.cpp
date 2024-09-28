#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long int a, counter = 0;
    vector<long long int> vect;
    for (int i = 0; i < 4; i++)
    {
        cin >> a;
        vect.push_back(a);
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (vect[i] == vect[j])
            {
                counter++;
                break;
            }
        }
    }
    cout << counter << "\n";
    return 0;
}