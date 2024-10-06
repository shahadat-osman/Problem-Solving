// Shahadat Osman
// Date: 03-10-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<string> str;

    for (int i = 0; i < n - 1; i++)
    {
        string tmp = s.substr(i, 2);
        str.push_back(tmp);
    }

    sort(str.begin(), str.end());

    int count = 1, max = INT_MIN;
    string ans = str[0];
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == str[i + 1])
            count++;

        else
        {
            if (count > max)
            {
                max = count;
                ans = str[i];
            }
            count = 1;
        }
    }
    cout << ans << "\n";

    return 0;
}