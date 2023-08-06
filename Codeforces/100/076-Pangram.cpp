#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string str;
    cin >> n >> str;
    vector<int> freq(26 + 1);
    int ln = str.size();
    for (int i = 0; i < ln; i++)
    {
        int ind;
        if (str[i] > 64 && str[i] < 91)
            ind = str[i] - 64;
        else
            ind = str[i] - 96;

        freq[ind] += 1;
    }
    int ans = 1;
    for (int i = 1; i <= 26; i++)
    {
        if (freq[i] == 0)
        {
            ans = 0;
            break;
        }
    }
    if (ans == 0)
        cout << "NO\n";
    else
        cout << "YES\n";
    return 0;
}