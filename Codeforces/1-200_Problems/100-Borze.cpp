// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    int i, j;
    cin >> s;

    vector<int> vect;
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] == '.')
            vect.push_back(0);
        if (s[i] == '-' && s[i + 1] == '.')
        {
            vect.push_back(1);
            i++;
        }
        else if (s[i] == '-' && s[i + 1] == '-')
        {
            vect.push_back(2);
            i++;
        }
    }
    for (auto v : vect)
        cout << v;

    return 0;
}