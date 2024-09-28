#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, x=0, y=0, z=0, x1, y1, z1;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x1>>y1>>z1;
        x+=x1;
        y+=y1;
        z+=z1;
    }
    if(x==0 && y==0 && z==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;
}