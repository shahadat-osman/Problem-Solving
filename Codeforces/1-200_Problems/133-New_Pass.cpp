// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, i, k;
    string s;
    char p = 97;
    
    cin >> n >> k;

    i = 0;
    while (n--)
    {
        if (i == k)
        {
            p = 97;
            i = 0;
        }
        s += p;
        i++;
        p++;
    }
    cout << s << "\n";
    return 0;
}