#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string position;

    cin >> position;

    int max = 1, count = 1;
    for (int i = 0; i < position.size(); i++)
    {
        if (position[i] == '0')
        {
            if (position[i + 1] == '0')
                count++;
            else
            {
                if (count > max)
                    max = count;
                count = 1;
            }
        }
        else if (position[i] == '1')
        {
            if (position[i + 1] == '1')
                count++;
            else
            {
                if (count > max)
                    max = count;
                count = 1;
            }
        }
    }
    if (max >= 7)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}