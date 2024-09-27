//Shahadat Osman
// Date: 23-09-2024
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;

    int sum1=0, sum2=0;
    for(int i=0; i<6; i++)
    {
        if(i<3)
        {
            sum1+=s[i]-48;
        }
        else
        {
            sum2+=s[i]-48;
        }
    }
    if(sum1==sum2)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}