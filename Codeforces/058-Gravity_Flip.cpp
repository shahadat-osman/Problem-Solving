#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, i;
    cin >> n;
    vector<int> arr(n);
    for (i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";

    return 0;
}