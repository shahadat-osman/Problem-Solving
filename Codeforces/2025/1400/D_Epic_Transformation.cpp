// Shahadat Osman
//  Date: 19-04-2025
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mapp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mapp[x]++;
        }
        priority_queue<int> pq;
        for (auto [x, y] : mapp)
        {
            pq.push(y);
        }
        while (!pq.empty())
        {
            if (pq.size() < 2)
                break;
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            x--, y--;
            if (x)
                pq.push(x);
            if (y)
                pq.push(y);
        }
        int sz = 0;
        while (!pq.empty())
        {
            sz += pq.top();
            pq.pop();
        }
        cout << sz << "\n";
    }

    return 0;
}