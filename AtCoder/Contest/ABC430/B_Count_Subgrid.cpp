// Shahadat Osman
// Date: 01-11-2025
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

    int n, m;
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }

    set<vector<int>> st;

    for (int i = 0; i <= n - m; i++)
    {
        for (int j = 0; j <= n - m; j++)
        {
            vector<int> v(m * m, 0);
            int z = 0;
            for (int p = i; p < i + m; p++)
            {
                for (int q = j; q < j + m; q++)
                {
                    if (grid[p][q] == '#')
                        v[z] = 1;

                    if (grid[p][q] == '.')
                        v[z] = 0;

                    z++;
                }
            }
            st.insert(v);
        }
    }
    cout << st.size() nl;

    return 0;
}