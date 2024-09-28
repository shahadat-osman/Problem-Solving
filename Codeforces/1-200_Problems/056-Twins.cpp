#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, i, j, sum = 0, sum2 = 0, count = 0;
    cin >> n;

    vector<int> arr(n);
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());

    for (i = 0; i < n; i++)
    {
        sum -= arr[i];
        sum2 += arr[i];
        count++;
        if (sum2 > sum)
            break;
    }

    cout << count << "\n";

    return 0;
}