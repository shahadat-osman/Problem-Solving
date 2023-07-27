#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int i, w, n;
    cin >> n;
    vector<int> arr(n);
    for (i = 1; i <= n; i++)
    {
        cin >> w;
        arr[w] = i;
    }
    for (i = 1; i <= n; i++)
        cout << arr[i] << " ";
    cout << "\n";

    return 0;
}