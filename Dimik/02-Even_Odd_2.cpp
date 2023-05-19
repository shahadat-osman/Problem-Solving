#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    unsigned long long int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        n%=10;
        cout<<n;
    }

    return 0;
}