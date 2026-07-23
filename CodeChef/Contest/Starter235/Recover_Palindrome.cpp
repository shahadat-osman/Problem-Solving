// Shahadat Osman
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
        cin>>n;
        string s;
        cin>>s;
        bool flg=true;
        for(int i=0; i<=n/2; i++)
        {
            if(s[i]=='?' && s[n-i-1]=='?')
            {
                flg=false;
                break;
            }
        }
        if(flg)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}