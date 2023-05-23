#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t, sz, i, j;
    string str;

    cin >> t;
    while (t--)
    {
        string r_str, palindrome;
        cin >> str;
        sz = str.size();
        for (i = sz - 1; i >= 0; i--)
        {
            r_str.push_back(str[i]);
        }
        palindrome = str + r_str;
        cout << palindrome << "\n";
    }

    return 0;
}