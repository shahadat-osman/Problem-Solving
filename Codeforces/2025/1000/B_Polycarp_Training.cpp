// Shahadat Osman
//  Date: 19-04-2025
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while (t--)
    {
        int n;
        cin >> n;
        multiset<int> ml;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            ml.insert(x);
        }

        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            auto it = ml.lower_bound(i);
            if (it != ml.end())
            {
                count++;
                ml.erase(it);
            }
            else
                break;
        }
        cout << count << "\n";
    }

    return 0;
}