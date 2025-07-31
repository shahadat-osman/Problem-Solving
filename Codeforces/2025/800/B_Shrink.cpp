// Shahadat Osman
// Date: 08-06-2025
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define yes() cout << "Yes\n"
#define no() cout << "No\n"
#define endl '\n'
#define nl << '\n'

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
        deque<int> dq;
        for (int i = n; i > 2; i--)
        {
            dq.push_back(i);
        }
        dq.push_front(1);
        dq.push_back(2);

        for (auto val : dq)
            cout << val << " ";
        cout nl;
    }

    return 0;
}