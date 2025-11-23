// Shahadat Osman
// Date: 07-11-2025
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define yes() cout << "YES\n"
#define no() cout << "NO\n"
#define endl '\n'
#define nl << '\n'
#define sp << ' '

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
        map<int, int> myMap;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            myMap[x]++;
        }
        if (myMap.size() == 1)
            cout << -1 nl;
        else
        {
            vector<int> b, c;
            for (auto it = myMap.begin(); it != myMap.end(); it++)
            {
                if (it == myMap.begin())
                {
                    for (int i = 0; i < it->second; i++)
                    {
                        b.push_back(it->first);
                    }
                }
                else
                {
                    for (int i = 0; i < it->second; i++)
                    {
                        c.push_back(it->first);
                    }
                }
            }
            cout << b.size() sp << c.size() nl;
            for (int i = 0; i < b.size(); i++)
            {
                cout << b[i] sp;
            }
            cout nl;
            for (int i = 0; i < c.size(); i++)
            {
                cout << c[i] sp;
            }
            cout nl;
        }
    }

    return 0;
}