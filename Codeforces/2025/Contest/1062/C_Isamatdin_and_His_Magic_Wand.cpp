// Shahadat Osman
// Date: 28-10-2025
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
        vector<int> nums(n);
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
            if (nums[i] % 2 == 0)
                even++;
            else
                odd++;
        }

        if (even == 0 || odd == 0)
        {
            for (int i = 0; i < n; i++)
            {
                cout << nums[i] sp;
            }
            cout nl;
        }
        else
        {
            sort(nums.begin(), nums.end());
            for (int i = 0; i < n; i++)
            {
                cout << nums[i] sp;
            }
            cout nl;
        }
    }

    return 0;
}