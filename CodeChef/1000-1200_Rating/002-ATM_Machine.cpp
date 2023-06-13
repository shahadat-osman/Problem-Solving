// 

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]<=k)
        {
            cout<<"1";
            k-=arr[i];
        }
        else
            cout<<"0";
            
        
    }
    cout<<"\n";
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