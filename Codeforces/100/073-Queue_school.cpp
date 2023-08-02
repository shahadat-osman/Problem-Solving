#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, t, i, ln;
    cin >> n >> t;
    string queue;
    cin >> queue;
    ln = queue.size();
    while (t--)
    {
        for (i = 0; i < ln - 1; i++)
        {
            if (queue[i] == 'B' && queue[i + 1] == 'G')
            {
                swap(queue[i], queue[i + 1]);
                if (queue[i + 2] == 'G')
                    i += 2;
            }
        }
    }
    cout << queue << "\n";

    return 0;
}