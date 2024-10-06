// Shahadat Osman
// Date: 28-09-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int R = 0, U = 0, cost = 0;
    for (int i = 0; i < n-1; i++)
    {
        if (s[i] == 'R')
            R++;
        else if (s[i] = 'U')
            U++;

        if(R==U && s[i]==s[i+1])
            cost++;
    }
    cout << cost << "\n";

    return 0;
}