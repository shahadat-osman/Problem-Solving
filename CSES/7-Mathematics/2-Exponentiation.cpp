// Shahadat Osman
// Date: 23-07-2025
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define yes() cout << "Yes\n"
#define no() cout << "No\n"
#define endl '\n'
#define nl << '\n'
 
const int MOD = 1e9 + 7;
 
int power(int a, int n)
{
    int ans = 1;
    while (n)
    {
        if (n & 1)
            ans = (1LL * ans % MOD * a % MOD);
 
        a = (1LL * a % MOD * a % MOD);
        n >>= 1;
    }
    return ans;
}
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << power(a, b) nl;
    }
 
    return 0;
}
