// Shahadat Osman
// Date: 21-08-2025
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define yes() cout << "Yes\n"
#define no() cout << "No\n"
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
        int zeros = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
            if (nums[i] == 0)
                zeros++;
        }
        if (!zeros)
            cout << 1 nl;
        else if (zeros == n)
            cout << 0 nl;
        else
        {
            int count = 0;
            bool flg = false;
            for (int i = 0; i < n; i++)
            {
                if (nums[i] > 0 && flg == false)
                {
                    flg = true;
                    count++;
                }
                else if (nums[i] == 0)
                {
                    flg = false;
                }
            }
            if (count == 1)
            {
                cout << 1 nl;
            }
            else
                cout << 2 nl;
        }
    }

    return 0;
}