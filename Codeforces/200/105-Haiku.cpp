// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 3, flag = 0, sz;
    string line;

    for (int i = 1; i <= t; i++)
    {
        getline(cin, line);
        sz = line.size();
        int count = 0;

        for (int j = 0; j < sz; j++)
        {
            if (line[j] == 'a' || line[j] == 'e' || line[j] == 'i' || line[j] == 'o' || line[j] == 'u')
                count++;
        }
        if (i == 1 && count == 5)
            flag++;
        else if (i == 2 && count == 7)
            flag++;
        else if (i == 3 && count == 5)
            flag++;
    }
    if (flag == 3)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}