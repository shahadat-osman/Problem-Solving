// Shahadat Osman
//  Date: 02-01-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        int n, Elodreip = 0, total_vote, Awruk;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            Elodreip += arr[i];
        }
        int maxx = *max_element(arr.begin(), arr.end());

        while (true)
        {
            total_vote = maxx * n;
            Awruk = total_vote - Elodreip;
            if (Awruk > Elodreip)
            {
                cout << maxx << "\n";
                break;
            }
            maxx++;
        }
    }

    return 0;
}