#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        float rt=sqrt(n);
        int rt_mod=(int)rt;
        if(rt_mod*rt_mod==n)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}