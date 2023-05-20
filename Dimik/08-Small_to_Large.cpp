#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t, j=1;
    cin>>t;
    while(t--)
    {
        vector<int>a(3);
        for(int i=0; i<3; i++)
            cin>>a[i];
        
        sort(a.begin(), a.end());
        cout<<"Case "<<j<<": ";
        for(int i=0; i<3; i++)
        {
            cout<<a[i];
            if(i!=2)
                cout<<" ";
        }
        cout<<"\n";
        j++;
    }

    return 0;
}