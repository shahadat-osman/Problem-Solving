// Shahadat Osman
//  Date: 20-04-2025
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while (t--)
    {
        int q, i = 1;
        cin >> q;
        set<pair<int, int>> st;
        multiset<pair<int, int>> ml;
        vector<int> ans;
        while (q--)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                int m;
                cin >> m;
                st.insert({i, m});
                ml.insert({m, -i});
                i++;
            }
            else if (x == 2)
            {
                int pos = st.begin()->first;
                int money = st.begin()->second;
                ans.push_back(pos);
                st.erase(st.begin());
                ml.erase({money, -pos});
            }
            else
            {
                int pos = -ml.rbegin()->second;
                int money = ml.rbegin()->first;
                ans.push_back(pos);
                st.erase({pos, money});
                ml.erase(--ml.end());
            }
        }
        for (auto val : ans)
            cout << val << " ";
        cout << "\n";
    }

    return 0;
}