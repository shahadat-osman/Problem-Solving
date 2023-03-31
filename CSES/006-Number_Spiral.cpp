#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int spiral[5][5] = {
        {1, 2, 9, 10, 25},
        {4, 3, 8, 11, 24},
        {5, 6, 7, 12, 23},
        {16, 15, 14, 13, 22},
        {17, 18, 19, 20, 21}};
    
    int t, y, x;
    cin>>t;
    while(t--)
    {
        cin>>y>>x;
        cout<<spiral[y-1][x-1]<<"\n";
    }
    return 0;
}