#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int x, n, m;
    cin>>x>>n>>m;

    if((x+m)>=n)
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;
}