//Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int rating;
    cin>>rating;
    if(rating>=1900)
        cout<<"Division 1\n";
    else if(rating<=1899 && rating>=1600)
        cout<<"Division 2\n";
    else if(rating<=1599 && rating>=1400)
        cout<<"Division 3\n";
    else if(rating<=1399)
        cout<<"Division 4\n";
    
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