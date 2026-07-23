// Shahadat Osman
// Date: 08-04-2026
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
        int k, n;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end());
        int mid;
        int dif = n - k;
        if (dif % 2 == 0)
            mid = (dif / 2) - 1;
        else
            mid = dif / 2;

        int l = mid, r = mid + k;

        set<int> st;
        for (int i = l; i <= r; i++)
            st.insert(arr[i]);

        for (auto p : st)
            cout << p << " ";
        cout nl;
    }

    return 0;
}