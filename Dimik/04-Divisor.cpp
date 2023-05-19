#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t, n, j=1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<"Case "<<j<<": ";
        for(int i = 1; i<=n; i++)
        {
            if(n%i==0)
            {
                cout<<i<<" ";
            }
        }
        cout<<"\n";
        j++;
    }

    return 0;
}