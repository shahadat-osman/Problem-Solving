// Shahadat Osman
// Date: 29-09-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    vector<int> vect;
    for (int i = 0; i < 12; i++)
    {
        int x;
        cin >> x;
        vect.push_back(x);
    }

    if (k == 0)
    {
        cout << "0\n";
        return 0;
    }
    sort(vect.begin(), vect.end(), greater<int>());

    int sum = 0, count = 0;
    for (int i = 0; i < 12; i++)
    {
        sum += vect[i];
        count++;
        if (sum >= k)
        {
            cout << count << "\n";
            return 0;
        }
    }
    cout << "-1\n";

    return 0;
}