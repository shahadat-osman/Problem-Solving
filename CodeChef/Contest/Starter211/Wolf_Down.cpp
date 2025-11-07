// Shahadat Osman
// Date: 05-11-2025
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
        int n; cin>>n;
        string s;cin>>s;
        int ans = 0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
                break;
            ans++;
        }
        cout<<ans nl;
    }

    return 0;
}