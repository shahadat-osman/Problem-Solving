// Shahadat Osman
// Date: 06-11-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t = 1;
    cin >> n;
    string s = to_string(n);

    int sz = s.size();

    int i = 0, k = 3;
    bool flag = true, skip = false;
    while (true)
    {
        if (i == (sz - 2) && skip == false)
            k = 2;
        if (i == (sz - 1) && skip == false)
            k = 1;
        if (i >= sz)
            break;
        string str = s.substr(i, k);
        int num = stoi(str);
        if ((k == 3 && num == 144) || (k == 2 && num == 14) || (k == 1 && num == 1))
        {
            i += k;
            k = 3;
        }
        else if (k == 3)
        {
            k--;
            skip = true;
        }
        else if (k == 2)
        {
            k--;
            skip = true;
        }
        else if (k == 1)
        {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
